#include<stdio.h> 
//anish deshmukh 
//anish_03_
int main(){

    int num[10];
      int bignumber = 0;
      int i = 0;
      int minnumber = num[0];


    for( i=0; i != 10;i++){
        

        printf("enter number to store in array :  ");
        scanf("%d",&num[i]);

        
        
    }

    for( i=0; i != 10;i++){


      

        if(num[i] > bignumber){
            bignumber = num[i];

        }
        else{

            
        }


    }

for( i=0; i != 10;i++){


      

        if(num[i] > bignumber){
            bignumber = num[i];

        }
        else{

            
        }


    }
for( i=0; i != 10;i++){


      

        if(num[i] < minnumber){
            minnumber = num[i];

        }
        else{

            
        }


    }




    printf("the big number is  %d \n",bignumber);
    printf("the min number is %d  \n" , minnumber);


    
    
    }
