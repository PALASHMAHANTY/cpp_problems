#include<iostream>
using namespace std;

int main(){
    int arraylength,n,x=0;
    cin>>n;
    arraylength=n;

    int array[arraylength];
    int i,j,a=0,count=1;
    int d=0,e=-1,totalsubarray,k,p,key;
    totalsubarray=((arraylength*(arraylength+1))/2)-arraylength;
    int subarray[totalsubarray][arraylength];
    int z=-1;
    int product[totalsubarray];
    while(x<arraylength){
        cin>>array[x];
        x++;

    }

    for(i=1;i<arraylength;i++)
    {
       
        std::cout<<"the subarray number >> "<<count<<" << is:"<<endl;
        count++;
        std::cout<<"{ ";
        for(j=a;j<=i;j++)
        {
            std::cout<<array[j]<<" ";
            subarray[d][++e]=array[j];
        }
        std::cout<<" }"<<endl;
        std::cout<<"\n";
        
        


        // find the maximum and minimum------------------------------------------------------------------
        for(k=1;k<=e;k++){
        key=subarray[d][k];
        p=k-1;
        while((p>=0)&&(key<subarray[d][p]))
        {
            subarray[d][p+1]=subarray[d][p];
            p=p-1;

        }
        subarray[d][p+1]=key;

        }
        std::cout<<"the sorted subarray is:  ";
        std::cout<<" {";
        for(p=0;p<=e;p++)
        {
           std::cout<<subarray[d][p]<<" ";
        }
        std::cout<<"}  ";

        std::cout<<":minimun element "<<subarray[d][0]<<"maximum element"<<subarray[d][e]<<endl;
        product[++z]=(subarray[d][0] * subarray[d][e]);
        std::cout<<"the product is of "<<subarray[d][0]<<" and "<<subarray[d][e]<<"is: "<<product[z];
        //-----------------------------------------------------------------------------------------------------
        

        if((i==arraylength-1)&&(a!=arraylength-1))
        {

            a=a+1;

            i=a;
        }
        d++;
        e=-1;
    
        
        std::cout<<endl;
        std::cout<<"--------------------------------------------";
        std::cout<<"\n";

    }
    std::cout<<"________________________________________________________________________________________"<<endl;
    std::cout<<"the products are: ";
    for(i=0;i<totalsubarray;i++){
        std::cout<<product[i]<<" ";

    }

    for(j=1;j<totalsubarray;j++){
        key=product[j];
        i=j-1;
        while((i>0)&&(key<product[i]))
        {
            product[i+1]=product[i];
            i=i-1;

        }
        product[i+1]=key;

    }
    std::cout<<"\n............................................."<<endl;
    std::cout<<"the sorted products are: ";
    for(i=0;i<totalsubarray;i++){
        std::cout<<product[i]<<" ";

    }
    std::cout<<endl<<"the maximum product value  is: "<<product[totalsubarray-1];
    return 0;
}
