        //RAII

//EASY

// #include <iostream>
// using namespace std;
// class Resource {
//     public:
//         Resource(){cout << "Resource acquired\n";}
//         ~Resource(){cout << "Resource released\n";}
        
// };
// int main(){
//     Resource c;
//     return 0;
// }

//MEDIUM

// #include <iostream>
// using namespace std;
// class IntResource{
//     public:
//     IntResource(int a){data  = new int(a);}
//     ~IntResource(){
//         cout << *data << endl;
//         delete data;
//         data = nullptr;
//     }
//     private:
//     int *data;
// };
// int main(){
//     IntResource s(12);
//     return 0;
// }

//HARD

// #include <iostream>
// using namespace std;
// class IntArray{
//     private:
//         int *arr;
//         size_t size;
//     public:
//         IntArray(size_t s) : size(s){
//             arr = new int[size];
//             for(size_t a = 0;a<size;++a){
//                 arr[a] = a;
//             }
//         }
//         ~IntArray() {
//             for(size_t b = 0;b< size;++b)
//                 cout << arr[b] << " ";
//             cout << endl;
//             delete[] arr; 
//             arr = nullptr;
//         }
// };
// int main(){
//     size_t s;
//     cout << "Cin size of array: ";
//     cin >> s;
//     IntArray a(s);
//     return 0;
// }

//MOVE SEMANTIC

//EASY
// #include <iostream>
// using namespace std;
// class Buffer{
//     private:
//         int* data;
//         size_t size;
//     public:
//         Buffer(size_t s) : size(s){
//             data = new int[size];
//             for(size_t i = 0;i<size;++i){
//                 data[i] = i + 1;
//             }
//         }
//         Buffer(const Buffer&) = delete;
//         Buffer operator=(const Buffer&) = delete;
//         Buffer(Buffer&& other){
//             data = other.data;
//             size = other.size;
//             other.data = nullptr;
//             other.size = 0;
//         }
//         ~Buffer(){
//             for(size_t i = 0;i< size;++i){
//                 cout << data[i] << " ";
//             }
//             cout << endl;
//             delete[] data;
//             data = nullptr;
//         }

// };
// int main(){
//     Buffer s(10);
//     Buffer d = move(s);
//     return 0;
// }

//MOVE SEMANTIC + SMART POINTERS

//MEDIUM

// #include <memory>
// #include <iostream>
// using namespace std;

// class Widget {
//     private:
//         unique_ptr<int> value;
//     public:
//         Widget(int a){
//             value = make_unique<int>(a);
           
//         }
//         void print(){
//                 cout <<"Value: " << *value;
//         }
// };
// int main(){
//     unique_ptr<Widget> p = make_unique<Widget>(5);
//     unique_ptr<Widget> d = move(p);
//     d->print();
//     return 0;
// }

//MEDIUM
#include <iostream>
#include <memory>
using namespace std;

class Gadget{
    private:
        shared_ptr<int> value;
    public:
        Gadget(int a){value = make_shared<int>(a);}
        void printCount(){
            cout << "Value: " << *value << "\n";
            cout << "Count: " << value.use_count();
            cout << endl;
        }
};
int main(){
    shared_ptr<Gadget> g1 = make_shared<Gadget>(10);
    shared_ptr<Gadget> g2 = g1;
    g1->printCount();
    g2->printCount();

    return 0;
}