# ifndef __HSERVER_HPP_
# define __HSERVER_HPP_
# include<iostream>
# include<string.h>
# include<fstream>
# include<stdlib.h>
# include <sys/socket.h>
# include <netinet/in.h>
using namespace std;
# define WSIZE 1024*1024*10
class Server {
public:
    Server(const int port);
    ~Server();
    void run();
private:
    // anything you need to make it work.
    int sfd;//jian ting tao jie zi
    int cfd;//ke hu duan tao jie zi
    struct sockaddr_in server_addr;//fu wu duan ip
    struct sockaddr_in client_addr;// ke hu dun ip
    socklen_t c_len;
};
# endif
