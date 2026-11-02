#include<iostream>
using namespace std;
void print (int n) {
    if (n==0) {
        return;
    }
    print (n-1);
    cout<<n<<" ";
}
int sum (int n) {
    if (n==0) return 0;
    return n+sum (n-1);
}
int sumdigits (int n) {
    if (n==0) return 0;
    return n%10+sumdigits (n/10);
}
int countdigits (int n) {
    if (n<0) return 1;
    return 1+countdigits (n/10);
}
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int fibonacci (int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    return fibonacci (n-1)+fibonacci (n-2);
}
int power (int n, int p) {
    if (n==0) return 1;
    return n*power (n-1, p);
}
void printarray (int arr[],int index, int n) {
    if (index==n)
        return;
    cout<<arr[index]<<" ";
    printarray (arr, index+1, n);

}
int largest (int arr[],int index, int n) {
    if (index==n-1)
        return arr[index];
    int mx= largest (arr, index+1, n);

    if (arr[index]>mx)
        return arr[index];
    return mx;

}
int smallest (int arr[],int index, int n) {
    if (index==n-1)
        return arr[index];
    int mn= smallest (arr, index+1, n);

    if (arr[index]<mn)
        return arr[index];
    return mn;

}
int main () {
    int choice,n,a,b;
    int arr[] = {10,50,20,80,30};
    int size =5;

    cout << "Recursion Menu"<<endl;
    cout << "1. Print "<<endl;
    cout << "2. Sum "<<endl;
    cout << "3. factorial "<<endl;
    cout << "4. sum of digits "<<endl;
    cout << "5. count digits "<<endl;
    cout << "6. fibonacci "<<endl;
    cout << "7. power a^b "<<endl;
    cout << "8.print array "<<endl;
    cout << "9. largest "<<endl;
    cout << "10. smallest "<<endl;

    cout << "/enter your choice"<<endl;
    cin >> choice;
    switch (choice) {
        case 1:
            cout <<endl<<"Enter the number: "<<endl;
            cin >> n;
            print (n);
            break;

        case 2 :
            cout << "Enter n: "<<endl;
            cin >> n;
            cout<<"Sum = "<<sum(n)<<endl;
            break;

        case 3 :
            cout << "Enter n: "<<endl;
            cin >> n;
            cout << "factorial = "<< factorial(n)<<endl;
            break;


        case 4 :
            cout << "Enter number : "<<endl;
            cin >> n;
            cout <<"sum of digits = "<<sumdigits(n)<<endl;
            break;

        case 5 :
            cout << "Enter number : "<<endl;
            cin >> n;
            cout <<"Total digits = "<<countdigits(n)<<endl;
            break;

        case 6 :
            cout << "Enter n : " <<endl;
            cin >> n;
            cout <<"fibonacci = "<< fibonacci(n)<<endl;
            break;

        case 7 :
            cout << "Enter a and b : "<<endl;
            cin >> a >> b;
            cout <<"power ="<<power(a,b)<<endl;
            break;

        case 8 :
            printarray(arr,size,n);
            break;
        case 9 :
            cout <<"largest = "<<largest(arr,size,0)<<endl;
            break;
        case 10 :
            cout <<"smallest = "<<smallest(arr,size,0)<<endl;
            break;
        default :
            cout <<"Invalid choice"<<endl;



    }
}































