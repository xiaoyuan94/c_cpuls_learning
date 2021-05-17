//
// Created by ubuntu on 2021/4/22.
//

#include "mysql_demo.h"
#include <vector>

MysqlDemo::MysqlDemo()
{
    std::cout << "MysqlDemo() " << std::endl;
    Init();
}

MysqlDemo::~MysqlDemo()
{
    std::cout << "~MysqlDemo() " << std::endl;
    Close();
}

void MysqlDemo::Init()
{
    std::cout << "Init " << std::endl;
    mysql_init(&mysql_);
    mysql_real_connect(
            &mysql_,
            "192.168.220.139",    //要访问数据库的IP地址
            "demo_db",            //用户名
            "demo_db",            //密码
            "demo_db",            //要访问的数据库
            3306,            //该数据库的端口
            NULL,            //一般为NULL
            0            //一般为0
    );
}

void MysqlDemo::Insert()
{
    std::cout << "Insert() " << std::endl;
    std::string sql = "insert into student value(2, 'as', 12, 'qweq')";
    //执行sql语句
    mysql_query(&mysql_, sql.c_str());
}

void MysqlDemo::Close()
{
    std::cout << "Close() " << std::endl;
    //关闭数据库连接
    mysql_close(&mysql_);
}

void MysqlDemo::Query()
{
    std::cout << "Query() " << std::endl;
    std::string sql = "SELECT id, name, age, info FROM demo_db.student;";
    mysql_query(&mysql_, sql.c_str());

    MYSQL_RES *result = NULL;
    result = mysql_store_result(&mysql_);

    //得到查询出来所有数据的条数
    int row_count = mysql_num_rows(result);
    std::cout << "all data number: " << row_count << std::endl;

    //得到字段的个数和字段的名字
    int field_count = mysql_num_fields(result);
    std::cout << "field count : " << field_count << std::endl;

    //得到所有字段的名字
    MYSQL_FIELD *field = NULL;
    for (int i = 0; i < field_count; ++i) {
        field = mysql_fetch_field_direct(result, i);
        std::cout << field->name << "\t";
    }
    std::cout << std::endl;

    //显示表中的所有数据
    MYSQL_ROW row = NULL;
    row = mysql_fetch_row(result);
    while (NULL != row) {
        for (int i = 0; i < field_count; ++i) {
            std::cout << row[i] << "\t";
        }
        std::cout << std::endl;
        row = mysql_fetch_row(result);
    }
    mysql_free_result(result);
}

void MysqlDemo::Delete()
{
    //删除
    std::string sql = "delete from student where id = 33";
    //执行sql语句
    mysql_query(&mysql_, sql.c_str());
}

void MysqlDemo::QueryTables()
{
    //查询数据库
    std::string sql = "show tables;";

    mysql_query(&mysql_, sql.c_str());

    MYSQL_RES *result = NULL;
    result = mysql_store_result(&mysql_);

    //得到查询出来所有数据记录的数量
    std::vector<std::string> allTable;
    MYSQL_ROW row = mysql_fetch_row(result);
    while (NULL != row) {
        allTable.push_back(row[0]);
        row = mysql_fetch_row(result);
    }

    for (std::vector<std::string>::const_iterator cit = allTable.begin(); cit != allTable.end(); ++cit) {
        std::cout << *cit << "\t";
    }
    std::cout << std::endl;
    mysql_free_result(result);

}









