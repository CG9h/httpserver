# include<iostream>
# include"hserver.hpp"
# include<stdlib.h>
# include<fstream>
using namespace std;

int main(int argc,char const * argv[]){
      
     Server*s=NULL;
     int port;
     if(argc<2){
         s=new Server(80);
     }
     else{
        port=atoi(argv[1]);
        s=new Server(port);
     }
     s->run();

     delete s;
     return 0; 
}
