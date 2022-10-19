#include<stdio.h>
#include<math.h>

void bubblesort(int arr[],int a,int b,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-1-i;j++)
      {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
      }  
    }
}
int distance(int x1,int y1,int x2,int y2){
    int d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return d;
}

void closest(int a[],int b[],int n,int k){
    int arr[n];
    int brr[n];
    for(int i=0;i<n-1;i++){
     arr[i]= distnace(a[i],b[i],a[i+1],b[i+1]);
    }
}

int main(){
    int n;
    printf("Enter the number of input pair:");
    scanf("%d",&n);
    int x[n],y[n];
        for(int i=0;i<n;i++){
            scanf("%d%d",&x[i],&y[i]);
        }

    int a[n],b[n];      //sorting in x
    for(int i=0;i<n;i++){
        a[i]=x[i];
        b[i]=y[i];
    }
    int temp;
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-1-i;j++)
      {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
        }
      }  
    }

  for(int i=0;i<n;i++){
    printf("(%d,%d) ",a[i],b[i]);
  }
    printf("\n");


    int c[n],d[n];  //sorting in y
    for(int i=0;i<n;i++){
        c[i]=x[i];
        d[i]=y[i];
    }

    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-1-i;j++)
      {
        if(d[j]>d[j+1])
        {
            temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
            temp=d[j];
            d[j]=d[j+1];
            d[j+1]=temp;
        }
      }  
    }

   

   for(int i=0;i<n;i++){
    printf("(%d,%d)",c[i],d[i]);
  }

    return 0;
}