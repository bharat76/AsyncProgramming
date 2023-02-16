#include <iostream>
#include <signal.h>
#include <glog/logging.h>
#include <curl/curl.h>
using namespace std;


int main(int argc, char **argv) {
    FLAGS_stderrthreshold = 1;
    FLAGS_logtostderr = 1;
    google::InitGoogleLogging(argv[0]);
    LOG(INFO) << "Service starting... " << argv[0];
    return 0;
}
