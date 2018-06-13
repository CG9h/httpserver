# include "hserver.hpp"
# include<sstream>
    Server::Server (const int port){
            
            sfd = socket(AF_INET,SOCK_STREAM,0);
            server_addr.sin_family = AF_INET;
            server_addr.sin_port = htons(port);
            server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
            int opt = 1;
            setsockopt(sfd, SOL_SOCKET, SO_REUSEADDR|SO_REUSEPORT, &opt, sizeof(opt));

            if(bind(sfd,(struct sockaddr*)&server_addr,sizeof(server_addr))<0){
                 stringstream s;
                 s<<port;
                 string s2;
                 s2="bind error "+s.str();
                 throw s2;
             }

            listen(sfd,100);
    }

    Server:: ~Server(){
           out_file.close();
           if(-1 != sfd)
           shutdown(sfd,SHUT_RDWR);
           if(-1 != cfd)
           shutdown(cfd,SHUT_RDWR);
    }

    void Server::run(){

          if(sfd!=-1)
            {
                cfd = accept(sfd,(struct sockaddr*)&client_addr,&c_len);
               
                while(1)
                {
                    
                    
                              
                 }
                   
                   
                
            } 

    }

