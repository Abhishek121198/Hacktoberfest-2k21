#include <iostream>
#include <string>

using namespace std;

class Batsman {
    protected:
        string bName;
        int noOfMatchesBatsman;
        int runs;
    public:
        Batsman() {
            cout<<"Constructor called for class Batsman"<<endl;
        }
        void getBatsmanData(string bName, int noOfMatchesBatsman, int runs) {
            this -> bName = bName;
            this -> noOfMatchesBatsman = noOfMatchesBatsman;
            this -> runs = runs;
        }
        void info() {
            cout<<"Batsman details"<<endl;            
            cout<<"Name: "<<bName<<endl;
            cout<<"No. of matches: "<<noOfMatchesBatsman<<endl;
            cout<<"Runs: "<<runs<<endl;
        }
        ~Batsman() {
            cout<<"Destructor called for class Batsman"<<endl;
        }
};

class Bowler {
    protected:
        string blName;
        int noOfMatchesBowler;
        int wickets;
    public:
        Bowler() {
            cout<<"Constructor called for class Bowler"<<endl;
        }
        void getBowlerData(string blName, int noOfMatchesBowler, int wickets) {
            this -> blName = blName;
            this -> noOfMatchesBowler = noOfMatchesBowler;
            this -> wickets = wickets;
        }
        void info() {
            cout<<"Bowler details"<<endl;            
            cout<<"Name: "<<blName<<endl;
            cout<<"No. of matches: "<<noOfMatchesBowler<<endl;
            cout<<"Wickets: "<<wickets<<endl;
        }
        ~Bowler() {
            cout<<"Destructor called for class Bowler"<<endl;
        }
};

class Fielder {
    protected:
        string fName;
        int noOfMatchesFielder;
        int catches;
    public:
        Fielder() {
            cout<<"Constructor called for class Fielder"<<endl;
        }
        void getFielderData(string fName, int noOfMatchesFielder, int catches) {
            this -> fName = fName;
            this -> noOfMatchesFielder = noOfMatchesFielder;
            this -> catches = catches;
        }
        void info() {
            cout<<"Fielder details"<<endl;            
            cout<<"Name: "<<fName<<endl;
            cout<<"No. of matches: "<<noOfMatchesFielder<<endl;
            cout<<"Catches: "<<catches<<endl;
        }
        ~Fielder() {
            cout<<"Destructor called for class Fielder"<<endl;
        }
};

class allRounder : public Batsman, public Bowler, public Fielder {
    public:
        allRounder() {
            cout<<"Constructor called for class allRounder"<<endl;
        }
        float avg() {
            return (runs + wickets + catches) / 3;
        }
        void info() {
            cout<<"The average of runs, wickets and catches is "<<avg()<<endl;
        }
        ~allRounder() {
            cout<<"Destructor called for class allRounder"<<endl;
        }
};

int main() {
    string bName, blName, fName;
    int noOfMatchesBatsman, runs, noOfMatchesBowler, wickets, noOfMatchesFielder, catches;
    cout<<"Enter batsman's name: ";
    cin>>bName;
    cout<<"Enter no. of matches played by batsman: ";
    cin>>noOfMatchesBatsman;
    cout<<"Enter runs: ";
    cin>>runs;
    cout<<"Enter bowler's name: ";
    cin>>blName;
    cout<<"Enter no. of matches played by bowler: ";
    cin>>noOfMatchesBowler;
    cout<<"Enter wickets: ";
    cin>>wickets;
    cout<<"Enter fielder's name: ";
    cin>>fName;
    cout<<"Enter no. of matches played by fielder: ";
    cin>>noOfMatchesFielder;
    cout<<"Enter catches: ";
    cin>>catches;
    Batsman *bat;
    Bowler *bowl;
    Fielder *field;
    allRounder allround;
    bat = &allround;
    bat -> getBatsmanData(bName, noOfMatchesBatsman, runs);
    bat -> info();
    bowl = &allround;
    bowl -> getBowlerData(blName, noOfMatchesBowler, wickets);
    bowl -> info();
    field = &allround;
    field -> getFielderData(fName, noOfMatchesFielder, catches);
    field -> info();
    allround.info();
    return 0;
}
