

# include <iostream>
class editor
{
    
    public:
        editor()
        {
            newArray = nullptr;

        }
        ~editor()
        {
            delete[] newArray;
            newArray = nullptr;
            printf("%p\n",newArray);
        }
        //
    void Create(int numArr)
    {
        newArray = new int[numArr];
        sizeofNumber = numArr;

    }
    int get(int getNumArr) 
    {
        if(sizeofNumber >= 0 && getNumArr < sizeofNumber)
            return newArray[getNumArr] ;
        
    }
    int set(int setNumArr) 
    {
        if(sizeofNumber >= 0 && setNumArr < sizeofNumber)
        newArray[setNumArr] = setNumArr;
       
    }
private:
     int* newArray;      
     int sizeofNumber;
     
};
int main()
{
    editor test;
    test.Create(1000);
    for (int i = 0; i < 1000; i++)
        {
            test.set(i);
            
        }
    for (int i = 0; i < 1000; i++)
        {
            
            printf("%d\n",  test.get(i));
        }
    

}
