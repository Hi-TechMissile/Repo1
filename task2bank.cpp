#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <conio.h>
using namespace std;
char ch1;
string name(string user)
{
    fstream fin;
    fin.open("task2data.txt",ios::in);
    vector<string> row;
    string line="",word="",temp="",ter="";
    double t=0.0;
    while(!fin.eof())
    {
        row.clear();
        getline(fin,line);
        stringstream s(line);
        while(getline(s,word,','))
        row.push_back(word);
        if(user==row[0])
        {
            ter=row[0];
            break;
        }
    }
    return ter;
}
string code(string user1)
{
    fstream fin;
    fin.open("task2data.txt",ios::in);
    vector<string> row;
string line="",word="",temp="",ter="";
double t=0.0;
    while(!fin.eof())
    {
        row.clear();
        getline(fin,line);
        stringstream s(line);
        while(getline(s,word,','))
        row.push_back(word);
        if(user1==row[0])
        {
            ter=row[1];
            break;
        }
    }
    return ter;
}

int pen(string user2)
{
    fstream fin;
    fin.open("task2data.txt",ios::in);
    vector<string> row;
string line="",word="",temp="",ter="";
int t=0;
    while(!fin.eof())
    {
        row.clear();
        getline(fin,line);
        stringstream s(line);
        while(getline(s,word,','))
        row.push_back(word);
        if(user2==row[0])
        {
            t=stoi(row[3]);
            break;
        }
    }
    return t;
}

double viewbal(string user2)
{
    fstream fin;
    fin.open("task2data.txt",ios::in);
    vector<string> row;
string line="",word="",temp="",ter="";
double t=0.0;
    while(!fin.eof())
    {
        row.clear();
        getline(fin,line);
        stringstream s(line);
        while(getline(s,word,','))
        row.push_back(word);
        if(user2==row[0])
        {
            t=stod(row[2]);
            break;
        }
    }
    return t;
}
double deposit(string user3,double amt)
{
    fstream fin,fout;
    vector<string> row;
    string line="",word="",temp="",ter="";
    double t=0.0;
    fin.open("task2data.txt", ios::in);
    fout.open("task2datanew.txt", ios::out);
    while(!fin.eof())
    {
        row.clear();
        getline(fin,line);
        stringstream s(line);
        while (getline(s, word, ','))
            row.push_back(word);
        if(user3==row[0])
            fout<<row[0]<<','<<row[1]<<','<<stod(row[2])+amt<<','<<row[3]<<'\n';
        else
            fout<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<'\n';
    }
    fin.close();
    fout.close();
    fstream kin,kout;
    kin.open("task2datanew.txt",ios::in);
    kout.open("task2data.txt",ios::out);
    while(!kin.eof())
    {
        row.clear();
        getline(kin,line);
        stringstream s(line);
        while (getline(s, word, ','))
            row.push_back(word);
        kout<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<'\n';
    }
    kin.close();
    kout.close();
    ofstream ofs;
    ofs.open("task2datanew.txt", ofstream::out | ofstream::trunc);
    ofs.close();
    return viewbal(user3);
}
double withdraw(string user4,double with)
{
    fstream fin,fout;
    vector<string> row;
    string line="",word="",temp="",ter="";
    double t=0.0;
    fin.open("task2data.txt", ios::in);
    fout.open("task2datanew.txt", ios::out);
    while(!fin.eof())
    {
        row.clear();
        getline(fin,line);
        stringstream s(line);
        while (getline(s, word, ','))
            row.push_back(word);
        if(user4==row[0])
            fout<<row[0]<<','<<row[1]<<','<<stod(row[2])-with<<','<<row[3]<<'\n';
        else
            fout<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<'\n';
    }
    fin.close();
    fout.close();
    fstream kin,kout;
    kin.open("task2datanew.txt",ios::in);
    kout.open("task2data.txt",ios::out);
    while(!kin.eof())
    {
        row.clear();
        getline(kin,line);
        stringstream s(line);
        while (getline(s, word, ','))
            row.push_back(word);
        kout<<row[0]<<','<<row[1]<<','<<row[2]<<','<<row[3]<<','<<'\n';
    }
    kin.close();
    kout.close();
    ofstream ofs;
    ofs.open("task2datanew.txt", ofstream::out | ofstream::trunc);
    ofs.close();
    return viewbal(user4);
}
int main()
{
    fstream fout, fin;
    fout.open("task2data.txt",ios::out|ios::app);
    cout<<endl<<"Welcome to the IITI ATM."<<endl<<"========================"<<endl<<"This program was created by a first year B. Tech. student at IIT, Indore."<<endl;
    cout<<"========================================================================="<<endl;
    cout<<endl<<"Select an option to start:"<<endl;
    cout<<"1. Create a new Account."<<endl<<"2. Login to your Account."<<endl<<"(press any key to quit)"<<endl<<endl;
    char ch;
    cin>>ch;
     
    string uname="",pword="",confirm;
    int pin,c,pinl;
    double b=0.0;
    char w;
    switch(ch)
    {
        
        case '1':
        
        cout<<endl<<"Enter new Account username (without any blank spaces): ";
        cin>>uname;
        do
        {
            cout<<"Enter new Account password (without any blank spaces): ";
            cin>>pword;
            cout<<"Confirm new Account password: ";
            cin>>confirm;
            if(confirm!=pword)
                cout<<"Confirm password does not match. Retry."<<endl;
        } while (confirm!=pword);
        do
        {
            cout<<"Enter new Account PIN: ";
            cin>>pin;
            cout<<"Confirm new Account PIN: ";
            cin>>c;
            if(c!=pin)
                cout<<"Confirm PIN does not match. Retry."<<endl;
        } while (c!=pin);
        cout<<endl<<"Account creation successful."<<endl;
        cout<<"Username: "<<uname<<endl<<"Password: ";
        for(int i=1;i<=pword.size();i++)
        cout<<"*";
        cout<<endl<<"PIN:      ****"<<endl<<"DO NOT SHARE YOUR ACCOUNT PASSWORD/PIN WITH ANYONE."<<endl<<endl;
        fout<<uname<<','<<pword<<','<<b<<','<<pin<<'\n';
        break;
        
       
        case '2':
        
        do
        {
        cout<<endl<<"Enter username: ";
        cin>>uname;
        cout<<"Enter password: ";
        cin>>pword;
        if(uname!=name(uname) || pword!=code(uname))
        cout<<"Invalid username or password entered. Try again."<<endl; 
        }while(uname!=name(uname) || pword!=code(uname));
        cout<<"User authentication successful. Welcome."<<endl<<"DO NOT SHARE YOUR ACCOUNT PASSWORD/PIN WITH ANYONE."<<endl<<endl;
         
        cout<<"Select an operation:"<<endl<<"1. Cash deposit."<<endl<<"2. Cash withdrawal."<<endl<<"3. Transfer money to another Account."<<endl<<"4. View current Account balance only."<<endl<<"(press any key to quit)"<<endl<<endl;
        cin>>ch1;
        double b=0.0;
        string transfer="";
        switch(ch1)
        {
           
            case '1':
            
            cout<<endl<<"Enter your 4-digit Account PIN: ";
            do
            {
                cin>>pinl;
                if(pinl!=pen(uname))
                    cout<<"Invlaid PIN entered. Please try again."<<endl;
            }while(pinl!=pen(uname));
            cout<<"Enter the amount that you want to deposit: ";
            cin>>b;
            cout<<endl<<"Transaction successful."<<endl<<"Current Account balance: INR "<<deposit(uname,b)<<endl<<"========================================================================="<<endl<<endl;
            break;

           
            case '2':
            
            cout<<endl<<"Enter your 4-digit Account PIN: ";
            do
            {
                cin>>pinl;
                if(pinl!=pen(uname))
                    cout<<"Invlaid PIN entered. Please try again."<<endl;
            }while(pinl!=pen(uname));
            cout<<"Enter the amount that you want to withdraw: ";
            cin>>b;
            cout<<endl<<"Transaction successful."<<endl<<"Current Account balance: INR "<<withdraw(uname,b)<<endl<<"========================================================================="<<endl<<endl;
            break;

           
            case '3':
            
            cout<<endl<<"Enter your 4-digit Account PIN: ";
            do
            {
                cin>>pinl;
                if(pinl!=pen(uname))
                    cout<<"Invalid PIN entered. Please try again."<<endl;
            }while(pinl!=pen(uname));
            cout<<"Enter the username of the recipient: ";
            cin>>transfer;
            cout<<endl<<"Enter the amount to be transferred: ";
            cin>>b;
            deposit(transfer,b);
            withdraw(uname,b);
            cout<<endl<<"Transaction successful."<<endl<<"Current Account balance: INR "<<viewbal(uname)<<endl<<"========================================================================="<<endl<<endl;
            break;


            case '4':
            
            cout<<endl<<"Enter your 4-digit Account PIN: ";
            do
            {
                cin>>pinl;
                if(pinl!=pen(uname))
                    cout<<"Invlaid PIN entered. Please try again."<<endl;
            }while(pinl!=pen(uname));
            cout<<"Current Account balance: INR "<<viewbal(uname)<<" only."<<endl<<"========================================================================="<<endl<<endl;
            break;
        }
        
    }
    cout<<endl<<"Restarting... (press any key)"<<endl<<endl;
    getch();
    return 0;
}
