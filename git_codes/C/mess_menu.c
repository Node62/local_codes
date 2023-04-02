#include<stdio.h>
#include<time.h>
#include<string.h>
#define nl printf("\n");
#define sl for(int isl=0;isl<27;isl++) printf("-");
#define lcon (y%4==0&&y%100!=0||y%400==0)
int daybet(int ad, int am, int ay,int bd, int bm, int by);
int ato();

void menu(int,int);
int y;
//----------------
int main(){nl
    int food,code;
    char end[99];
    code=ato();
    printf("Menu for which food? (enter number)\n1)Breakfast\n2)Lunch\n3)Snacks\n4)Dinner\n");
    b:  printf("> ");
    scanf("%d",&food);nl
    if(food<1||food>4) {printf("%s",food==69?"nice!\n":"*Please enter valid no.*\n"); goto b;}
    printf("~Today's Menu~      c[%d][%d]\n",code,food-1); sl nl
    menu(code,food-1);
nl sl return 0;}
//----------------
int ato(){
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    t=daybet(3,10,22,tm.tm_mday, tm.tm_mon+1, tm.tm_year-100)%14;
    printf("Today is %d/%d/%d\n\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year-100);
    return t;}
//----------------
int daybet(int ad, int am, int ay,int bd, int bm, int by){
    int ml[12]={31,28,31,30,31,30,
                31,31,30,31,30,31};
    int c1=0,c2=0,dn=0,t;
    y=ay;
    if(lcon==1) ml[1]=29; else ml[1]=28;
    for(int i=11;i>=(am-1);i--)
    c1+=ml[i];
    c1=c1-ad;
    y=by;
    if(lcon==1) ml[1]=29; else ml[1]=28;
    for(int i=0;i<(bm-1);i++)
    c2+=ml[i];
    c2=c2+bd;
    for(int i=ay+1;i<=by-1;i++){
        y=i;
        if(lcon==1) dn=dn+366;
        else dn=dn+365;
    }
    if(ay==by){
        y=ay;
        c1=(lcon?366:365)-c1;
        t=c2-c1+1;
        }
    else t=c1+c2+dn+1;
    return t-1;
}
//----------------
void menu(int a,int b){
    char* c[14][4];
c[0][0]="Pongal\nKostyu\nCoconut chutney\nVada\n";
c[0][1]="Chappathi\nChaltey(?)\nRice\nDrumsticks\nPineapple Rasam\nCarrot Poriyal\nValaka Curry\nCurd\nPapad\nPickle\n";
c[0][2]="Masala Pori\n";
c[0][3]="Idly\nSambar & Coco chutney\nMalli Rice\nCurd Rice\nFryums\nBanana\nPickle\n";
c[1][0]="Carrot Mali Uttapam\nSambar\nKara Chutney\nRagi Kozhu\n";
c[1][1]="CHappathi\nChanna Masala\nRice\nVatha Khozumbu\nTomato Rasam\nKeerai Kootu\nBeetroot Poriyal\nCurd\nFryums\nPickle\n";
c[1][2]="Peas sundal\n";
c[1][3]="Masala chappathi\nmixed dhal\ntomato rice\nrice\nrasam\ncurd rice\nfryums\npickle\nbanana\n";
c[2][0]="Idly\nSambar\ncocunut chutney\ncornflakes\n";
c[2][1]="chappathi\npaneer butter masala\nrice\nonion sambar\nrasam\navial\ncabbage poriyal\ncurd\npapad\npickle\n";
c[2][2]="Masala Vada\n";
c[2][3]="Veg biryani\nraitha\nrice\nrasam\ncurd rice\nfryums\nbanana\npickle\njuice\n";
c[3][0]="Rava kitchadi\nsambar\nchutney\nmasala vada\n(?)bbj\n";
c[3][1]="chappathi\nveg khurma\nrice\nmoor khozambu\npepper rasam\nbeans \nmix veg poriyal\ncurd\npapad\npickle\n";
c[3][2]="peanut sundal\n";
c[3][3]="mini uthappam\nmalli chutney\nsambar\ntomato rice\nraitha\ncurd rice\nbanana\npickle\n";
c[4][0]="kanchipuram idly\nsambar\nmalli chutney\nvada\n";
c[4][1]="chappathi\ngreen moong kuruma\nrice\nmix veg sambar\ntomato rasam\nurulai kara curry\nchow cow kootu\ncurd\npapad\npickle\nsakkarai pongal\n";
c[4][2]="valaka baiji\n";
c[4][3]="methi chappathi\ndal makani\npeas pulav\nrice\nrasam\ncurd rice\nbanana\npickle\nraitha\n";
c[5][0]="tomato sevai\nsambar\ncoconut chutney\nbbj\nmasala vadai\n";
c[5][1]="chappathi\nrajma masala\nrice\nmocha kara kozhambu\nrasam\nyames\nlong beans poriyal\ncurd\npapad\npickle\n";
c[5][2]="channa sundal\n";
c[5][3]="kaloosai\nveg salna\ncoconut chutney\njeera rice\ncurd rice\nraitha\nbanana\npickle\n";
c[6][0]="poori\naloo masala\nbbj\n";
c[6][1]="Biryani\nraitha\nwhite rice\nawin ghee\nplain dal\npepper rasam\nice cream\nbuttermilk\nfryums\npickle\n";
c[6][2]="veg puff\n";
c[6][3]="ajwain chappathi\nyellow dal\nrice\nrasam\ncurd rice\npotato poriyal\nbanana\npickle\nfryums\n";
c[7][0]="pongal\nsambar\ncoconut chutney\nvada\n";
c[7][1]="chappathi\ndal tadka\nrice\nmix veg sambar\nrasam\nkeerai kootu\nyam kara curry\ncurd\npappad\npickle\n";
c[7][2]="channa sundal\n";
c[7][3]="idly\nsambar\ncoconut chutney\nveg pulav\nraitha\ncurd rice\nbanana\npickle\n";
c[8][0]="kal dosa\nveg salna\nmalli chutney\nkambu kozhu\n";
c[8][1]="chappathi\naloo peas masala\nrice\nmocha kala kozhambu\ntomato rasam\nmix veg poriyal\npoosam koothu\ncurd\nfryums\npickle\n";
c[8][2]="Bhel poori\n";
c[8][3]="aloo chappathi\nrajma dal\nrice\nchow chow sambar\nrasam & buttermilk\nbeans poriyal\nbanana\npickle\n";
c[9][0]="wheat rava upma\nsambar\ncoconut chutney\nvada\nbbj\n";
c[9][1]="chappathi\npalak paneer\nrice\nraddish sambar\nrasam\nkothavanranga ushlli\ncabbage pattani poriyal\ncurd\npapad\npickle\n";
c[9][2]="chilly bajji\n";
c[9][3]="dosa\nsambar\nred chilly coconut chutney\nthakali sathnam\nfryums\ncurd rice\nbanana\npickle\n";
c[10][0]="idly\nsambar\ncoconut chutney\nvada\n";
c[10][1]="chappathi\nchanna masala\nrice\npoosani moorkzhambu\naloo 65\nmix veg kootu\ncurd\nfryums\npickle\n";
c[10][2]="masala peas sundal";
c[10][3]="butter chappathi\ndal fry\nchanna capsicum pulav\nrice\nrasam\ncurd rice\nfryums\nbanana\npickle\n";
c[11][0]="lemon sevai\nmasala vada\nsambar\nchutney\nbbj\n";
c[11][1]="chappathi\ndal makhni\nrice\nsundaka vatha kozhambu\nrasam\nbeetroot channa poriyal\navial\ncurd\nfryums\npickle\npineapple kasabi\n";
c[11][2]="aloo bonda\n";
c[11][3]="kal dosa\nsambar\nkaba chutney\ntamarind rice\ncoconut thovaiyal\ncurd rice\nbanana\npickle\n";
c[12][0]="onion uttappam\nsambar\nred chutney\noats\n";
c[12][1]="chappathi\nblack channa masala\nrice\navaraikka sambar\npepper rasam\nvalaka kara curry\ncabbage kootu\ncurd\npapad\npickle\n";
c[12][2]="peanut sundal\n";
c[12][3]="veg noodles\nveg manchurian gravy\nsambar satham\ncurd rice\nfryums\nbanana\npickle\njuice\n";
c[13][0]="poori\nchana masala\nbbj\n";
c[13][1]="veg biryani\nraitha\nrice\nrasam\nice cream\nbutter milk\nappalam\npickle\n";
c[13][2]="cream bun";
c[13][3]="mint chappathi\narar dal\nrice\nrasam\nmint rice\ncurd rice\nappalam\nbanana\npickle\n";

printf("%s",c[a][b]);
}