#include<iostream>
enum travelclass{AC2TIER,FIRST,SLEEPER,AC3TIER,AC3ECONOMY};
class train
{
    std::string tname;
    int tnum;
    int noOfseats;
    enum travelclass type;
    std::string source;
    std::string destination;
    int distance;
    public:
     train();
     void accept();
     void display();
     void booktrain();
    //  int calFareAmt(int);

     std::string getTname() const { return tname; }
     void setTname(const std::string &tname_) { tname = tname_; }

     int getTnum() const { return tnum; }
     void setTnum(int tnum_) { tnum = tnum_; }

     int getNoOfseats() const { return noOfseats; }
     void setNoOfseats(int noOfseats_) { noOfseats = noOfseats_; }

     enum travelclass getType() const { return type; }
     void setType(const enum travelclass &type_) { type = type_; }

     std::string getSource() const { return source; }
     void setSource(const std::string &source_) { source = source_; }

     std::string getDestination() const { return destination; }
     void setDestination(const std::string &destination_) { destination = destination_; }

     int getDistance() const { return distance; }
     void setDistance(int distance_) { distance = distance_; }
     


};