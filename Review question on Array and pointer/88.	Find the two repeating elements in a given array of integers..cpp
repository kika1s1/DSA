89.	#include<iostream>
90.	using namespace std;
91.	 
92.	 
93.	int main()
94.	{
95.	    int n[10] = {1, 1, 4, 5, 5, 7, 7, 8, 10, 10};
96.	    for(int i=0; i < size(n); i++){
97.	        for(int j = 1; j < size(n)-2; j++){
98.	            if(n[i] ==n[j+i]){
99.	                cout<<n[i]<<" ";
100.	                
101.	            }
102.	        }
103.	    }
104.	//   return 0;     
105.	
106.	}
