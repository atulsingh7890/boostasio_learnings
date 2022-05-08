/* blocked */
#include <boost/asio.hpp>
#include <iostream>

int main(void) {
    boost::asio::io_service io_svc;
    /*
     * work class is responsible for telling the io_service object when the work starts and when it finished.
     * We are telling io_svc that there is work to do, but we do not define what work is
     * Thus program will be blocked infinetly and it will not execute following lines
     */
    boost::asio::io_service::work worker(io_svc);

    io_svc.run();

    std::cout << "We will not see this in console winodw now";

}
