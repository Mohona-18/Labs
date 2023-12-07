#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<string.h>


struct student
{
	char name[50];
	int roll;
	int age;
	char address[100];
	char pin[6];
	char number[10];
};

void display(struct student s1)
{	
	printf("name:%s\n",s1.name);
	printf("roll:%d\n",s1.roll);
	printf("age:%d\n",s1.age);
	printf("address:%s\n",s1.address);
	printf("pincode:%s\n",s1.pin);
	printf("mobile:%s\n",s1.number);
}

int main()
{

	int csid=socket(AF_INET,SOCK_DGRAM,0);
	if(csid==-1)
	{
		printf("served socket failed\n");
		return -1;
	}
	printf("server socket created\n");
	struct sockaddr_in server_addr;
	
	server_addr.sin_family=AF_INET;
	server_addr.sin_port=htons(11010);
	server_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
	
	int roll;
	printf("enter roll number: ");
	scanf("%d",&roll);
	
	int server_size=sizeof(server_addr);
	int send_stat=sendto(csid,&roll,sizeof(roll),0,(struct sockaddr*)&server_addr,server_size);
	if(send_stat==-1)
	{
		printf("failed to send message\n");
		return -1;
	}
	printf("roll number sent to server\n");
	struct student stud;
	int recv_stat=recvfrom(csid,&stud,sizeof(stud),0,(struct sockaddr*)&server_addr,&server_size);
	if(recv_stat==-1)
	{
		printf("failed to receive message\n");
		return -1;
	}
	printf("the student details are as follows\n");
	display(stud);
	close(csid);
	
	
}
