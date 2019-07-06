#include<stdio.h>
void test();
int get_books(int subshelf[],int n,int k);
int shelf[100];
void sort(int N);
int main(){
	int T,P;
	printf("Enter no of test cases : ");                          //Get no of test cases from user
	scanf("%d",&T);
	
	for(P=1;P<=T;P++){
		
		test();
	       
	}
}

void test(){
	int N,M,Q,I;
	 printf("-----Test case -----\n");	
	        printf("Enter no of shelves : ");                  //Get no of shelves from user
	        scanf("%d",&N);
	        
	        
	        for(M=0;M<N;M++){
		        scanf("%d",&shelf[M]);                        //Get no of books in each book shelf
           	}
           	printf("Enter no of queries : ");                 // Get no of queries
           	scanf("%d",&Q);
           	
           	for(I=0;I<Q;I++){
           		int n;
           		printf("Enter query : ");
           		scanf("%d",&n);
           		
           		
           		int x,y,k;
           		switch(n){
           			case 1:
           				
           				scanf("%d%d",&x,&k);
           				
           				//sort and add
                        //sort(N);
           				shelf[x-1]=k;
           				if(shelf[x-1]==k)
           				break;
           				
           			case 0:
           				scanf("%d%d%d",&x,&y,&k);          //If query starts with 0 , execute case 0 
           				int s;
           				s=y-x+1;                          
           				int subshelf[s];                    //Get no of shelves in between x and y including x,y
           				int j=0;
           				int i;
           				for(i=x-1;i<y,j<s;i++){            
           					subshelf[j]=shelf[i];           //Get book amounts in each shelf in between x & y including x,y
           					j++;
						   }
			   		    int l;
//						for(l=0; l<s; l++){
//                            printf("%002",subshelf[l]);
//                        }
//                
                        printf("Answer : ");
                        printf("%d\n",get_books(subshelf,s,k));            
                        break;
                        
                        
//                    default: printf("Invalid");
				   }
			   }
	
	
}
int get_books(int subshelf[],int n,int k){             //Function to sort shelves according to increasing order of books and get relavent shelf no
	float newShelves[50] = {0};                                // n - no of shelfs to be sorted
    int value = -1;                       			   // K - rank
    int i,j;
    for (i = 0; i < n; i++) { 
        int r = 1, s = 1; 
          
        for (j = 0; j < n; j++) {       			   	
            if (j != i && subshelf[j] < subshelf[i])  
                r += 1; 
                  
            if (j != i && subshelf[j] == subshelf[i]) 
                s += 1;      
        } 
        newShelves[i] = r + (float)(s - 1) / (float) 2; 
        printf("%d\n",newShelves[i]);
    }
    
     for(i=0; i<n; i++){
        int r = (int)newShelves[i];                 //If there's a rank no in newsheleves array then corresponding book no will be printed from subshelf array
         if(r==k){
            value = subshelf[i];
            break;
        }
    }
         return value;
    
}
void sort(int N){
	int j,i,temp;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(shelf[j]<shelf[i]){
				temp=shelf[j];
				shelf[j]=shelf[i];
				shelf[i]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
	  printf("%d\n",shelf[i]);
	 
	 
	
}