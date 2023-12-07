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
	struct student s[5],stud;
	s[0]=(struct student){"Rishika",25,20,"Ananta Vihar, Pokhariput","751020","1234567890"};
	s[1]=(struct student){"Biswajeet",20,20,"Techno Apartments, Mumbai","122055","9875612341"};
	s[2]=(struct student){"Aditya",43,21,"Cosmos Society, Khandagiri","988065","9876501234"};
	s[3]=(struct student){"Satyajeet",18,22,"Smart Nagar, Ahmedabad","123009","3324309987"};
	s[4]=(struct student){"Pratikshya",33,21,"Salt Lake, Kolkata","532189","2314456789"};


	int ssid=socket(AF_INET,SOCK_DGRAM,0);
	if(ssid==-1)
	{
		printf("served socket failed\n");
		return -1;
	}
	printf("server socket created\n");
	struct sockaddr_in server_addr,client_addr;
	
	server_addr.sin_family=AF_INET;
	server_addr.sin_port=htons(11010);
	server_addr.sin_addr.s_addr=htonl(INADDR_ANY);
	
	int bind_stat=bind(ssid,(struct sockaddr*)&server_addr,sizeof(server_addr));
	if(bind_stat==-1)
	{
		printf("server socket bind failed\n");
		return -1;
	}
	printf("server socket bind successful\n");
	int recv_roll,client_size=sizeof(client_addr);
	
	int recv_stat=recvfrom(ssid,&recv_roll,sizeof(recv_roll),0,(struct sockaddr*)&client_addr,&client_size);
	if(recv_stat==-1)
	{
		printf("failed to receive message\n");
		return -1;
	}
	printf("roll number received from client:%d\n",recv_roll);
	for(int i=0;i<5;i++)
	{
		if(s[i].roll==recv_roll)
		{
			printf("student record found\n");
			stud=s[i];
			break;
		}
	}
	int send_stat=sendto(ssid,&stud,sizeof(stud),0,(struct sockaddr*)&client_addr,client_size);
	if(send_stat==-1)
	{
		printf("failed to send message\n");
		return -1;
	}
	printf("sent student details to client\n");
	close(ssid);
	
}
