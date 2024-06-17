#include <bits/stdc++.h>
typedef unsigned long long ll;
#include <chrono>

using namespace std;
auto start = chrono::steady_clock::now();



	// void inc(int arr[],int size){
		
	// 	arr[0] = arr[0]+10;
		
		
	// }
	
	// void printArray(int arr[],int size){
		
	// 	for(int i =0;i<size;i++){
	// 		cout<<arr[i]<<" ";
	// 	}
	// 	cout<<endl<<arr[0];
		
	// }

	// void presentAbsent(int arr[], int size,int N){
	// 	bool a;
	// 	for(int i=0;i<size;i++){
			
	// 		if(arr[i]==N){
	// 			cout<<"Present at " << i<< " position";
	// 			a = 1;
	// 		}
			
	// 	}
	// 	if(a!=1){
	// 			cout<<"Not present";
	// 		}
		
	// }


	// void findZeroOne(int arr[],int size){
	// 	int ans=0;
	// 		int ans2=0;
	// 	for(int i=0;i<size;i++){
			
	// 		if(arr[i]==1){
	// 			ans++;
	// 		}
	// 		else if(arr[i]==0){
	// 			ans2++;
				
	// 		}
			
	// 	}
	// 	cout<<"Zero's are "<<ans<<endl;
	// 	cout<<"One's are "<<ans2;
	// }
	
	// void MaxArray(int arr[],int size){
	// 	int maxNum = INT_MIN;
		
	// 	for(int i =0;i<size;i++){
			
	// 		if(arr[i]>maxNum){
	// 			maxNum = arr[i];
				
	// 		}
			
	// 	}
	// 	cout<<maxNum;
	// }
	// void MinArray(int arr[],int size){
	// 	int minNum = INT_MAX;
		
	// 	for(int i =0;i<size;i++){
			
	// 		if(arr[i]<minNum){
	// 			minNum = arr[i];
				
	// 		}
			
	// 	}
	// 	cout<<minNum;
	// }

	// void extremePoints(int arr[],int size){
		
	// 	int start = arr[0];
	// 	int end = arr[size-1];
		
	// 	for(int i=0;i<size;i++){
			
	// 		if(start>end){
	// 			break;
	// 		}
	// 		else if(start ==end){
	// 			cout<<start;
	// 		}
			
	// 		else {
	// 		cout<<start<<" ";
	// 		cout<<end<<" ";
			
	// 		}
	// 		start++;
	// 		end--;
	// 	}
	// }

	// void reverseArray(int arr[],int size){
	// 	for(int i = size-1;i>=0;i--){
	// 		cout<<arr[i]<< " ";
	// 	}
	// }
	
	// void SreverseArray(int arr[], int size){
		
	// 	int end = size-1;
		
		
	// 	for(int start=0;start<size;start++){
			
	// 	if(start <=end){	
	// 		swap(arr[start],arr[end]);
	// 		// start++;
	// 		end--;
			
	// 	}
		
		
	// 	}
		
	// 	for(int i=0;i<size;i++){
	// 		cout<<arr[i]<<" ";
	// 	}
		
	// }

int main(){ 
	
	
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
	freopen("op.txt","r",stdin);
	freopen("mop.txt","w",stdout);
	#endif
	
	// int arr[10];
	// cout<<arr<<endl;
	// cout<<&arr<<endl;
	// int arr[53];
	// cout<<"Array created successfully";
	// char at[106];
	// bool r[23];
	
	// int arr[]={1,2,3,4,5,6,7,8,9};
	
	// for(int i=8;i>=0;i--){
	// 	cout<<arr[i];	
	// }
	// cout<<endl;
	// int brr[]={1,2,3,4,5,6};
	
	// for(int i=5;i>=0;i--){
	// 	cout<<arr[i];
	// }
	// cout<<endl;
	// for(int i=0;i<=5;i++){
	// 	cout<<arr[i]; 
	// }
	// cout<<endl;
	// int n;
	// cin>>n;
	// int ar[n];
	// for(int i=0;i<=5;i++){
	// 	cin>>ar[i];
	// }
	// for(int i =0;i<  5;i++){
	// 		cout<<ar[i];

	// }
	
	
	// int arr[5];
	
	// for(int i=0;i<5;i++){
	// 	cin>>arr[i];
	// }
	// memset(arr, 1,sizeof(arr));

	// for(int i=0;i<5;i++){
	// 	// arr[i]=10;
	// 	// cout<<arr[i]<<" ";
	// 	cout<<arr[i]<<" ";
	// }
	
	
	// int arr[5];
	
	// for(int i=0;i<5;i++){
	// 	cout<<arr[i]<<" ";
	// }
	
	// int arr[]={5,6};
	// int size =2;
	
	// inc(arr,size);
	// cout<<endl;
	// printArray(arr,size);
	
	// cout<<arr[1];
	// cout<<arr[0];
	
	
	// int arr[5]={1,2,3,4,5};
	// int size =5;
	// int N =4;
	// cin>>N;
	
	// presentAbsent(arr,size,N);
	// if(presentAbsent(arr,size,N)){
	// 	presentAbsent(arr,size,N);
	// }
	// else{
	// 	cout<<"Not present";
	// }
	
	
	// int arr[11]={1,0,1,0,0,1,1,1,1,4};
	
	// int size=11;
	
	// findZeroOne(arr,size);
	
	// int arr[5]={-23,-2,-3,-1,4};
	// int size =5;
	
	// MaxArray(arr,size); 
	// MinArray(arr,size);
	
	// int arr[6]={1,2,3,4,5,6};
	// int size = 6;
	
	// extremePoints(arr,size); 


	// int arr[7]={1,2,3,4,5,6,7};
	// int size = 7;
	
	// // reverseArray(arr,size);
	// // cout<<endl;
	
	// SreverseArray(arr,size);
	
	
	// vector<int>arr(10,20,30);
	// vector<int>brr(10,-1);
	
	// int n;
	// cin>>n;
	// int n;
	// cin>>n;
	// vector<int> arr(n);
	
	
	// // cout<<(sizeof(arr)/sizeof(bool))<<endl;
	// // cout<<arr.size()<<endl;
	// // cout<<arr.empty()<<endl;
	
	// arr.push_back(1);
	// arr.push_back(2);
	// arr.push_back(3);
	// arr.push_back(4);
	// // arr.push_back(5);
	// arr.pop_back();
	
	
		
	// 	cout<<arr(n);
	
	

	
	
	
	
	
	cout << "\n";
	auto end = chrono::steady_clock::now();
	auto diff = end - start;
	cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
		
	return 0;
}