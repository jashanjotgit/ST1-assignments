#include <iostream>
using namespace std;
class array
{
    int arr[10];
    int number;

public:
    void get_data()
    {
        cout << "enter total number of elements of array";
        cin >> number;
        cout << "enter values of elements of array:";
        for (int i = 0; i < number; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        cout << "elements of array" << endl;
        for (int i = 0; i < number; i++)
        {
            cout << i + 1 << "element:" << arr[i] << endl;
        }
    }

    int find_largest()
    {

        int large = arr[0];
        for (int i = 0; i < number; i++)
        {
            if (arr[i] > large)
            {
                large = arr[i];
            }
        }
        return large;
    }

    int find_smallest()
    {

        int small = arr[0];
        for (int i = 0; i < number; i++)
        {
            if (arr[i] < small)
            {
                small = arr[i];
            }
        }
        return small;
    }

    void insertion()
    {
        int beg = arr[0];
        int end = arr[number - 1];
        int middle_index = ((beg + end) / 2 ) -1;
        int new_elemnt = find_largest() + find_smallest();
        arr[middle_index] = new_elemnt;
        cout << "new array:" << endl;

        for (int i = 0; i<number; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void insert_at_beg()
    {
        int new_item;
        cout << "enter element you want to insert at beggening :";
        cin >> new_item;
        for (int i = number - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = new_item;
        cout << "new array:" << endl;
        for (int i = 0; i <=number; i++)
        {
            cout << i + 1 << "element:" << arr[i] << endl;
        }
    }

    void user_insert(){
        int pos,item;
        cout<<"enter element u want to insert :";
        cin>>item;
        cout<<"enter postion:";
        cin>>pos;

         for (int i = number - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = item;
        for (int i = 0; i <=number; i++)
        {
            cout << i + 1 << "element:" << arr[i] << endl;
        }
    }
};
int main()
{
    array obj;
    obj.get_data();
    obj.display();
    cout << "largest element in array:" << obj.find_largest() << endl;
    cout << "smallest element in array:" << obj.find_smallest()<<endl;
    obj.insertion();
    obj.insert_at_beg();
    obj.user_insert();

    return 0;
}