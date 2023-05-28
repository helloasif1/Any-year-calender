#include<bits/stdc++.h>
using namespace std;
int year;

int t_year()
{
    cout<<"Enter the year : ";
    cin>>year;
    return year;
}

int s_day(int day, int month, int year)
{


    return (((year-1)*365+((year-1)/4 - ((year-1)/100)+((year)/400)+1)))%7;


}


string monthname(int monthnum)
{
    string months[] = {"January", "February", "March",
                       "April", "May", "June",
                       "July", "August", "September",
                       "October", "November", "December"
                      };

    return (months[monthnum]);
}


int daysnum (int monthnum, int year)
{

    if (monthnum == 0)
        return (31);


    if (monthnum == 1)
    {

        if (year % 400 == 0 ||
                (year % 4 == 0 && year % 100 != 0))
            return (29);
        else
            return (28);
    }


    if (monthnum == 2)
        return (31);


    if (monthnum == 3)
        return (30);


    if (monthnum == 4)
        return (31);


    if (monthnum == 5)
        return (30);


    if (monthnum == 6)
        return (31);


    if (monthnum == 7)
        return (31);


    if (monthnum == 8)
        return (30);


    if (monthnum == 9)
        return (31);


    if (monthnum == 10)
        return (30);


    if (monthnum == 11)
        return (31);
}


void calendar(int year)
{
    cout<<"         Calendar - "<< year<<endl;
    int days;


    int c = s_day (1, 1, year);

    for (int i = 0; i < 12; i++)
    {
        days = daysnum (i, year);


        cout<<"   ------------"<<monthname (i)<<"-------------   ";
        cout<<endl;


        cout<<"  Sun  Mon  Tue  Wed  Thu  Fri  Sat"<<endl;

        int space;
        for (space = 0; space < c; space++)
            cout<<"     ";

        for (int j = 1; j <= days; j++)
        {
            cout<<setw( 5 )<<j;

            if (++space > 6)
            {
                space = 0;
                cout<<endl;
            }
        }

        if (space)
            cout<<endl;

        c = space;
    }

    return;
}


int main()
{
    t_year();
    calendar(year);

    return (0);
}
