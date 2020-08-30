#include <iostream>
#include<vector>
#include <ctime>
using namespace std;

template<size_t fil,size_t col>
//a) O(mlogn)
int busquedaBinaria(int E[], int primero=0,int ultimo=0)
{
    int indice;
    int indicei;
    int indiced;

    int medio=(primero+ultimo)/2;

    if(ultimo<primero)
    {
        indice=-1;
        return indice;
    }

    else if(primero!=ultimo +1)
    {

        if(indiced!=-1)
        {
            indiced=busquedaBinaria(E,medio+1,ultimo);
            return indiced;
        }
    
        if (indicei!=-1)
        {
            indicei=busquedaBinaria(E,primero,medio-1);
            return indicei;
            
        }

        if (E[medio]==0)
        {
            indice=medio;
            return indice;
        }
    
    return -1;
            

    }

    for(int i=0;i<fil<i++)
    {
        int search=busquedaBinaria(&skyline[i],0,col)
        if(search==-1)
        {
            indice=-1;
            return indice;
        }
        else
        {
            return busquedaBinaria;
        }
        
        
    }

}




//b) O(m+n)
template<size_t fil,size_t col>
int Anidado(int(&skyline)[fil][col])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(skyline[i][j]==0)
            {
                return j;
            }

        }
        return -1;
    }


}

int main()
{
    //matrix [n][m]
    int skyline[4][4]= {{1,1,1,0},{1,0,1,0},{0,0,1,0},{0,0,0,0}};      
    /* 
      1110
      1010
      0010
      0000
    */

   cout<<"A)"<<busquedaBinaria(skyline)<<endl;
   cout<<"B)"<<Anidado(skyline)<<endl;

   return 0;

 
}

/*Runtime of each algorithm
En el runtime de la A siendo O(mlogn) se tarda mucho más y de acuerdo a lo visto el que haya un log no es uno de los mejores casos en el time complexity.
Y en el caso B el O(m+n) es mucho más rapido.*/


