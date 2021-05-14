#include "libmysql/include/mysql_demo.h"
#include "libstl/include/insert_map.h"
#include <memory>

int main()
{
    std::unique_ptr<InsertMap> demo = std::make_unique<InsertMap>();
    demo->Show();
    return 0;
}
