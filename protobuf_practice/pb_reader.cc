#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "../protolib/test/topmessage.pb.h"
using namespace std;

// print the information of the given message
void readMessage(TopMessage* message) {
    cout << "Message ID : " << message -> id() << endl;
    cout << "Message val: " << message -> val() << endl;
    cout << "Message name: " << message -> name() << endl;
    cout << "Message checked: " << message -> checked() << endl;
}

// This function checks if a file exists
bool fileExists(const char *fileName) {
    ifstream infile(fileName);
    return infile.good();
}

// Main function: generate deserialze the messages and print them
// compile cmd: g++ -o pb_reader pb_reader.cc ../dst/topmessage.pb.cc -lprotobuf
int main(int argc, char* argv[]) {
    // GOOGLE_PROTOBUF_VERIFY_VERSION;

    if (argc > 3) {
        cerr << "Too many arguments." << endl;
        return -1;
    }

    // argv[1] is number of repeats, default 5
    // argv[2] is the path of folder for messages, default ../messages.txt
    int repeat = 1;
    string path = "messages.txt";
    
    if (argc > 1 and atoi(argv[1]) > 0) {
        repeat = atoi(argv[1]);
    }
    // cout << "The Value of repeat is " << repeat << endl;

    if (argc > 2 and *argv[2]) {
        path = argv[2];
    }
    if (!fileExists(&path[0])) {
        cerr << "File does not exist." << endl;
        return -1;
    }
    // cout << "The path for messages is " << path << endl;

    // open the file saving messages
    ifstream messageFile;
    messageFile.open(path, ios::in | ios::binary);

    // start the time and byte counter
    int totalBytes = 0;
    double totalTime = 0;
    clock_t clk;

    // repeat generating one message
    for(int i = 0; i < repeat; i ++) {
        cout << "Current message #: " << i << endl;
        // for each message, start the timer individually
        clk = clock();

        // deserialize the message
        int size;
        char sizeBuffer[4];
        messageFile.read(sizeBuffer, 4);
        size = atoi(sizeBuffer);
        // cout << "Message size: " << size << endl;

        char buffer[size];
        // string serializedMessage;
        TopMessage message;
        messageFile.read(buffer, size);
        // serializedMessage = buffer;
        // message.ParseFromString(serializedMessage);
        message.ParseFromArray(buffer, size);

        // increment time and byte counter
        totalBytes += size;
        totalTime += (float) (clock() - clk) / CLOCKS_PER_SEC;

        // read the message
        readMessage(&message);
    }

    // calculate performance
    cout << "Performance (printing out not counted):" << endl;
    cout << "Number of messages processed per second: " << repeat / totalTime << endl;
    cout << "Number of bytes processed per second: " << totalBytes / totalTime << endl;

    // close the file
    messageFile.close();
    return 0;
}
