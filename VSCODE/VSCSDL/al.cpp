#include <vector>
#include <iostream>
#include <map>

using namespace std;

std::map RE_JsonExtract (const string& json) {

    std::map<string, string> myMap;
    myMap["code"] = "201";
    myMap["id"] = "VZQslvjoM1";

    return myMap;
}

int main (int, char*[])
{ 

    std::string ggb = "{\n"
                      "    \"code\":201,\n"
                      "    \"desc\":\"SUCCESS\",\n"
                      "    \"data\":{\n"
                      "        \"id\":\"VZQslvjoM1\",\n"
                      "        \"tsp\": 1616496562\n"
                      "    } \n"
                      "}";

                 
    std::map<string, string> myMap;
    myMap["code"] = "201";
    myMap["id"] = "VZQslvjoM1";

    std::cout << "Code: " << myMap["code"] << std::endl;
    std::cout << "ID: " << myMap["id"] << std::endl;

    // 解析json字符串数据
     RE_JsonExtract(ggb);

    // {} 用map集合 []用vector 获取格式 传入解析的  jsonText[code][id] 这样获取 ,多重map
    cout <<jsonText<<endl;

    

    return 0;

}