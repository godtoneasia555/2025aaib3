/// weeek04-1.cpp
/// �Ʋ� vector<int >a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout << "�S����l��a������" << a.size() << endl;
    a.push_back(99); ///�U���٦��ܦh
    cout << "�g�Lpush_back " << a.size() << endl;
    vector<int> b(3); ///���Y�ۦp���}�C ����3
    cout << "a�����׬O" << b.size() << endl;
    a.push_back(99); ///�U���٦��ܦh
    for(int i=0; i<b.size(); i++) cout << b[i]<<' ';
    cout << "�g�Lpush_back " << a.size() << endl;
    vector<int> c(3,00); ///���Y�ۦp���}�C ����3
    for(int i=0; i<c.size(); i++) cout <<c[i] <<' ';
    cout <<"��l��(3,88) �N�|��3��88" << endl;








}

