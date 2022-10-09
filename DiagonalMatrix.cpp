// Matrix that have quite a lot of 0's in them, for e.g. Diagonal Matrix

#include <iostream>
using namespace std;

class DiagonalMatrix{
    private:
        int n;
        int*A;
    public:
        DiagonalMatrix(int size){
            n=size;
            A=new int[size];
            init();
        }

        void init(){
            for(int i=0; i<n; i++){
                A[i]=0;
            }
        }

        void set(int i, int j, int x){
            if(i==j && i<=n)
                A[i-1]=x;
        }

        int get(int i, int j){
            if(i>n || j>n)
                return -1;
            if(i==j)
                return A[i-1];
            return 0;
        }

        void display(){
            cout<<"\nMatrix : "<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==j)
                        cout<<A[i]<<" ";
                    else
                        cout<<"0 ";
                }
                cout<<endl;
            }
        }

        int getDimension(){
            return n;
        }

        ~DiagonalMatrix(){
            delete []A;
        }
};

int main()
{
    int n;
    cout<<"\nEnter Size of Diagonal : ";
    cin>>n;
    DiagonalMatrix D(n);
    cout<<"Menu : ";
    cout<<"\n\t1.Display\n\t2.Set Term\n\t3.Get Term\n\t4.Get Dimensions";
    int opt;
    do{
        cout<<"\nChoose Option : ";
        cin>>opt;
        switch (opt)
        {
            case 0:
                break;

            case 1:
                D.display();
                break;
            
            case 2:
                int i,j,x;
                cout<<"\nEnter Index : ";
                cin>>i>>j;
                cout<<"\nEnter Value : ";
                cin>>x;
                D.set(i, j, x);
                break;

            case 3:
                int a,b;
                cout<<"\nEnter Index : ";
                cin>>a>>b;
                cout<<"\nTerm : "<<D.get(a,b);
                break;

            case 4:
                cout<<"\nDimensions of Matrix : "<<D.getDimension()<<"x"<<D.getDimension();
                break;
            
            default:
                cout<<"\nInvalid Option";
                break;
        }
    }while(opt);

    return 0;
}