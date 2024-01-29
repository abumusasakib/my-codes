#include <iostream>
using namespace std;

class XMLData
{
private:
    string xmlData;

public:
    string getXMLData()
    {
        return this->xmlData;
    }
    XMLData(string pXmlData)
    {
        xmlData = pXmlData;
    }
};

class DataAnalyticsTool
{
private:
    string jsonData;

public:
    DataAnalyticsTool() {}
    DataAnalyticsTool(string pJsonData)
    {
        jsonData = pJsonData;
    }
    virtual void analyseData()
    {
        cout << "Analysing Data" << jsonData << endl;
    }
};

class Client
{
public:
    void ProcessData(DataAnalyticsTool *tool)
    {
        tool->analyseData();
    }
};

class Adapter : public DataAnalyticsTool
{
private:
    XMLData *xmlData;

public:
    Adapter(XMLData *pXMLData)
    {
        xmlData = pXMLData;
    }
    void analyseData() override
    {
        cout << "Converting XML Data " << xmlData->getXMLData() << " to JSON Data" << endl;
        cout << "Analysing the converted JSON Data" << endl;
    }
};

int main()
{
    XMLData *xmlData = new XMLData("Sample XML Data");
    DataAnalyticsTool *tool = new Adapter(xmlData);
    Client *client = new Client();
    client->ProcessData(tool);

    return 0;
}
