#include<iostream>
using namespace std;

class Patterns{
    public:
        void solidRectangle();
        void hollowRectangle();

        void halfPyramidStar(int n);
        void invertedHalfPyramidStar(int n);
        void hollowInvertedHalfPyramidStar(int n);
        void fullPyramidStar(int n);
        void invertedFullPyramidStar();
        void hollowFullPyramidStar();

        void halfPyramidNumber();
        void invertedHalfPyramidNumber();
        void hollowHalfPyramidNumber();
        void fullPyramidNumber();
        void hollowFullPyramidNumber();
        void hollowInvertedHalfPyramidNumber();

        void differentTypePalindromePyramid1();
        void differentTypePalindromePyramid2();
        void differentTypePalindromePyramid3();
        void differentTypePalindromePyramid4();

        void solidDiamond();
        void hollowDiamond();
        void solidHalfDiamond();

        void differentTypeSolidHalfDiamond1();
        void differentTypeSolidHalfDiamond2();
        void differentTypeSolidHalfDiamond3();
        void differentTypeSolidHalfDiamond4();

        void n1();
        void n2();

        void s1();
        void s2();
        void s3();
        void s4();

        void rightArrow();
        void leftArrow();

        void solidRhombus();
        void hollowRhombus();
};

int main(){
    Patterns p;
//    p.halfPyramidStar(5);
//    p.invertedHalfPyramidStar(5);
//    p.hollowInvertedHalfPyramidStar(5); //INCOMPLETE
    p.fullPyramidStar(4);
    return 0;
}

void Patterns::halfPyramidStar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Patterns::invertedHalfPyramidStar(int n){
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Patterns::hollowInvertedHalfPyramidStar(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"DO IT";
        }
        cout<<endl;
    }
}
void Patterns::fullPyramidStar(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(j==n){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
    }
}









































































