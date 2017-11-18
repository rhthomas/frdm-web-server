#ifndef __WEBSERVER_H_
#define __WEBSERVER_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<signal.h>

//	socket for client &	server
int client_sockfd;
int server_sockfd;

//	http header
char status[] = "HTTP/1.0 200 OK\r\n";
char header[] = "Server: SimpleServer\r\nContent-Type: text/html;charset=utf-8\r\n\r\n";
char body[] = \
			"<html>\
					<head><title>A simple Web Server</title></head>\
					<body>\
						<h1>COMP3215</h1>\
						<form action=\"\" method=\"post\">\
							<button name=\"button\" value='1' disable=\"disable\">LED ON</button>\
							<button name=\"button\" value='0' disable=\"disable\">LED OFF</button>\
						</form>\
					</body>\
			</html>";


char bt_on[]	=	"<h3>status:bt_on</h3>";
char bt_off[]	=	"<h3>status:bt_off</h3>";

void signal_exit(int sig)
{
	printf("close web server, please wait....\n");
	sleep(3);
	int res = close(server_sockfd);
	if(-1 == res)
	{
		perror("close"),exit(-1);
	}
	printf("web server closed\n");
	exit(0);
}


#endif
