#include<iostream>
using namespace std;
	int binarySearch(int lottery_no[],int size, int value){
		int low=0;
		int high=size - 1;
		int mid;
		
		while(low<=high){
			mid=(low+high)/2;
			if(lottery_no[mid]==value){
				return mid;
			}
			else if(lottery_no[mid]<value){
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
		return -1;
	}
	int main(){
	int value;
	int lottery_no[13]={268,269,270,271,272,273,274,275,276,277,278,279,280};
	int size= sizeof(lottery_no)/sizeof(lottery_no[0]);
cout<<"Welcome to the lottery\b\n";
cout<<"-----------------------"<<endl;
cout<<"Input your lottery number:";
cin>>value;
int index = binarySearch(lottery_no,size,value);
if(index == -1){
	cout<<"Sorry:( the number inputed is NOT included."<<endl;
}
else{
	cout<<"Congratulations:), your number is included. Contact us within 3 days to retrieve your reward."<<endl;
}
return 0;	
}
