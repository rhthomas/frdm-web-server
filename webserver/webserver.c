/////////////////////////////////////////////////*
//	@file		webserver.c
//	@author		Wujun	Xie		<wx1m17>
//	@author		Rhys	Thomas	<rt8g15>
//	@date		2017-11-14
//	@brief		a simple webserver based on linux
////////////////////////////////////////////////*/
#include "webserver.h"
//	socket for client &	server
extern int client_sockfd;
extern int server_sockfd;

//	http header
extern char status[];
extern char header[];
extern char body[];

//	messgae send to client for LED control
extern char bt_on[];
extern char bt_off[];

//	user define function for ctrl+c
//	close socket before interrupt
//	avoid socket/bind ERR when run it next time
extern void signal_exit(int sig);

int main(void)
{
	server_sockfd = socket(AF_INET,SOCK_STREAM,0);
	if(-1 == server_sockfd)
	{
		perror("socket"),exit(-1);
	}
	printf("socket\n");

	struct sockaddr_in addr;
	memset(&addr,0,sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_port	= htons(8080);
	addr.sin_addr.s_addr	= inet_addr("0.0.0.0");

	int res = bind(server_sockfd,(struct sockaddr*)&addr,sizeof(addr));
	if(-1 == res)
	{
		perror("bind"),exit(-1);
	}
	
	res = listen(server_sockfd,100);
	if(-1 == res)
	{
		perror("listen"),exit(-1);
	}
	printf("listenning...\n");
	
	printf("close web server --- ctrl+c\n");
	
	if(SIG_ERR == signal(SIGINT,signal_exit))
	{
		perror("signal"),exit(-1);
	}
	// always ack client request
	while(1)
	{
		printf("test on\n");
		client_sockfd = accept(server_sockfd,NULL,NULL);
		if(-1 == client_sockfd)
		{
			perror("accept"),exit(-1);
		}
		int tmp_sockfd = client_sockfd;
		char buf[1024];
		read(client_sockfd,buf,1024);
		printf("%s",buf);
		
		struct sockaddr_in recv_addr;
		socklen_t len = sizeof(recv_addr);
		getpeername(client_sockfd,(struct sockaddr*)&recv_addr,&len);
		char* ip = inet_ntoa(recv_addr.sin_addr);
		printf("client log in, ip is %s\n",ip);
		if(-1 == res)
		{
			perror("recv"),exit(-1);
		}
		char *str_bt0=NULL;
		str_bt0=strstr(buf,"button=0");
		char *str_bt1=NULL;
		str_bt1=strstr(buf,"button=1");
		
		//if(str_bt0==NULL && str_bt1==NULL)
		{
			write(client_sockfd,status,sizeof(status));
			write(client_sockfd,header,sizeof(header));
			write(client_sockfd,body,sizeof(body));
			printf("test page\n");
		}
		if(str_bt0==NULL && str_bt1!=NULL)//if click LED ON
		{
			write(client_sockfd,bt_on,sizeof(bt_on));
			printf("test bt_on\n");
			
		}	
		if(str_bt0!=NULL && str_bt1==NULL)//if click LED OFF
		{
			write(client_sockfd,bt_off,sizeof(bt_off));
			printf("test bt_off\n");
		}	
		close(client_sockfd);
	}
	return 0;
}





