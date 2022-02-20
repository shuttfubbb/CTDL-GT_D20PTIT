/*
    File này để xóa toàn bộ các file đuôi ".exe" cho đỡ nặng máy
    ------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("forfiles /p . > data.txt");
// Chú ý dấu /p ở đây là khóa nhận dạng path đến folder(dir) mà bạn cần đọc thông tin
// . là mặc định cho thư mục hiện thời, còn nếu bạn muốn dẫn đến thư mục khác thì điền vào 
// thay bằng dấu .
// > là dấu chuyển hướng đầu ra, không in ra màn hình mà chuyển vào file có tên là data.txt
    ifstream ifs;
    ifs.open("data.txt");
    if(ifs.bad()) {
        cout << "Error opening for reading";
        perror("data.txt");
        exit(-1);
    }
    string line;
    while(!ifs.eof()) {
        ifs >> line;
        string duoi;
        int i=0;
        while(line[i] != '.')
            ++i;
        duoi.insert(duoi.end(), line.begin()+i+1, line.begin()+i+4);
        if(duoi == "exe")
        {
            string name;
            name.insert(name.end(), line.begin()+1, line.end()-1);
            if( remove( name.c_str() ) != 0 )
            {
                cout << name << " ";
                perror( "Error deleting file" );
            }
            else
            {
                printf( "File successfully deleted: " );
                cout << name << endl;
            }   
        }
    }
    ifs.close();
    return 0;
}