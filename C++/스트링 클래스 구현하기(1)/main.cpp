#include <iostream>
#include <cstring>
using namespace std;

class String{
	private:
		int len;
		char* str;
		
	public:
		String(): len(0){
			str = NULL;
		}
		String(const char* s){
			len = strlen(s)+1;
			str = new char[len];
			strcpy(str, s);
		}
		String(const String& s){
			len=s.len;
			str= new char[len];
			strcpy(str,s.str);
		}
		~String(){
			delete[] str;
		}
		String& operator=(const String& s){
			if(str!=NULL)
			delete[] str;
			len=s.len;
			str = new char[len];
			strcpy(str, s.str);
			return *this;
		}
		String& operator+=(const String& s){
			len += (s.len-1);
			char* temp = new char[len];
			strcpy(temp, str);
			strcat(temp, s.str);
			
			if(str!=NULL)
				deletep[] str;
			str = temp;
			return *this;
		}
		bool operator==(const String& s){
			strcmp(str, s.String) ? false : true; )
		}
		String operator+(const String& s){
			char* temp = new char[len + s.len - 1];
			strcpy(temp, str);
			strcat(temp, s.str);
			
			String result(temp);
			delete[] temp;
			return result;
		}
		friend ostram& operator<<(ostream& os, const String& s);
};

ostream& operator <<(ostream& os, const String& s){
	os << s.str
	return os;
}

istream& operator>>(istream& is, String& s){
	char str[1000];
	cin >> str;
	s = String(str);
	return is;
}

int main(void)
{
    String str1 = "I like ";
    String str2 = "string class";
    String str3 = str1+str2;
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    str1 += str2;
    if(str1 == str3)
        cout << "���� ���ڿ�!" << endl;
    else
        cout << "�ٸ� ���ڿ�!" << endl;
    
    String str4;
    cout << "���ڿ� �Է�: ";
    cin >> str4;
    cout << "�Է��� ���ڿ�: " << str4 << endl;
    return 0;
}
