#include <mysql_demo.h>
#include <memory>
int main()
{
    std::unique_ptr<MysqlDemo> demo = std::make_unique<MysqlDemo>();
    demo->Insert();
    demo->Query();
    return 0;
}
