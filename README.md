# MySQL数据库管理工具

一个使用Qt开发的简洁MySQL数据库管理工具，支持SQL查询执行和结果可视化。

## 功能特点

- 连接/断开MySQL数据库
- 执行SQL查询（SELECT、INSERT、UPDATE、DELETE等）
- 表格化显示查询结果
- 显示操作状态和影响的行数
- 简洁直观的用户界面

## 系统要求

- Qt 5.15.2或更高版本
- Windows操作系统（已在Windows 10上测试）
- MySQL数据库服务器
- ODBC数据源配置

## 安装步骤

### 1. 安装MySQL数据库

1. 从[MySQL官网](https://dev.mysql.com/downloads/installer/)下载并安装MySQL
2. 安装过程中设置root用户密码（本程序默认使用root/2231251128）
3. 确保MySQL服务已启动并在3306端口运行

### 2. 配置ODBC数据源

1. 打开Windows控制面板 -> 管理工具 -> ODBC数据源(64位)
2. 点击"添加"，选择"MySQL ODBC Driver"（需先安装）
3. 填写如下信息：
   - 数据源名称：`mydatabase`（与程序中使用的名称一致）
   - 描述：任意描述文本
   - 服务器：`localhost`
   - 用户名：`root`
   - 密码：`2231251128`
   - 数据库：`mydatabase`（如果尚未创建，请先创建）
4. 点击"测试"确保连接成功，然后点击"确定"保存

### 3. 创建数据库

在MySQL中创建名为`mydatabase`的数据库：

```sql
CREATE DATABASE mydatabase;
```

## 使用方法

1. 启动应用程序，它会自动尝试连接到配置好的数据库
2. 如果连接成功，状态会显示"已连接"
3. 在查询框中输入SQL语句，例如：
   ```sql
   CREATE TABLE users (id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(50), age INT);
   ```
   ```sql
   INSERT INTO users (name, age) VALUES ('张三', 25);
   ```
   ```sql
   SELECT * FROM users;
   ```
4. 点击"执行查询"按钮执行语句
5. 查询结果（如果有）会显示在下方表格中
6. 执行非查询操作（如INSERT）时，会显示影响的行数

## 常见问题

1. **连接错误**：
   - 确保MySQL服务已启动
   - 验证用户名和密码正确
   - 检查ODBC数据源配置是否正确

2. **查询错误**：
   - 检查SQL语法
   - 确认引用的表和字段存在
   - 数据库用户是否有足够权限

## 项目结构

- `main.cpp` - 应用程序入口点
- `mainwindow.h/.cpp` - 主窗口实现
- `mainwindow.ui` - 用户界面设计

## 开发信息

本项目使用Qt Creator开发，采用Qt 5.15.2 MinGW 64位编译器。

## 许可

本软件仅用于学习和教育目的。 