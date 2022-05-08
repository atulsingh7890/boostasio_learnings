/* unblocked.cpp */
#include <boost/asio.hpp>
#include <iostream>

int main(void) {
    boost::asio::io_service io_svc;

    io_svc.run();

    std::cout << "We will see this line in console window,showing run is non-blocking" << std::endl;

    return 0;
}
