/// week03-1.cpp
/// c++�}�C vector<int>
#include <iostream> /// cin cout �ĥΪ�
#include <vector> ///���Ѫ��D�D �}�C vector
using namespace std;
int main()
{
    cout << "�п�J4�ӼƦr";
    vector<int> a;
     int now;
     for(int i=0; i<4.; i++){
        cin >> now;
        a.push_back(now);
    }

    for(int i=0; i<a.size(); i++){
    cout << a[i] << ' ';///�Ʀr�᭱,���Ů�
    }
     cout << "�{�b�{���X�� �S���J�F99 98��ӼƦr,���G�O?";

    a.push_back(99);///����a���᭱
    a.push_back(88);///����a���᭱

    for(int i=0; i<a.size(); i++){
    cout << a[i] << ' ';


    }
}


