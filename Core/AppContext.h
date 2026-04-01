#ifndef APPCONTEXT_H
#define APPCONTEXT_H

#include <QString>

#include <functional>
#include <memory>

class QWidget;

class DatabaseManager;
class SessionManager;
class AuthService;
class UserService;
class ProductService;
class InventoryService;
class SalesService;
class ReportService;

class AppContext
{
public:
    using InitialWindowFactory = std::function<QWidget *(AppContext &)>;

    AppContext();

    QString appDataDirectory();
    QString databaseFilePath();
    bool ensureAppDataDirectory();

    void setInitialWindowFactory(InitialWindowFactory factory);
    bool hasInitialWindowFactory() const;
    QWidget *createInitialWindow();

    void setDatabaseManager(const std::shared_ptr<DatabaseManager> &databaseManager);
    std::shared_ptr<DatabaseManager> databaseManager() const;

    void setSessionManager(const std::shared_ptr<SessionManager> &sessionManager);
    std::shared_ptr<SessionManager> sessionManager() const;

    void setAuthService(const std::shared_ptr<AuthService> &authService);
    std::shared_ptr<AuthService> authService() const;

    void setUserService(const std::shared_ptr<UserService> &userService);
    std::shared_ptr<UserService> userService() const;

    void setProductService(const std::shared_ptr<ProductService> &productService);
    std::shared_ptr<ProductService> productService() const;

    void setInventoryService(const std::shared_ptr<InventoryService> &inventoryService);
    std::shared_ptr<InventoryService> inventoryService() const;

    void setSalesService(const std::shared_ptr<SalesService> &salesService);
    std::shared_ptr<SalesService> salesService() const;

    void setReportService(const std::shared_ptr<ReportService> &reportService);
    std::shared_ptr<ReportService> reportService() const;

private:
    QString resolveAppDataDirectory() const;

    QString m_appDataDirectory;
    InitialWindowFactory m_initialWindowFactory;
    std::shared_ptr<DatabaseManager> m_databaseManager;
    std::shared_ptr<SessionManager> m_sessionManager;
    std::shared_ptr<AuthService> m_authService;
    std::shared_ptr<UserService> m_userService;
    std::shared_ptr<ProductService> m_productService;
    std::shared_ptr<InventoryService> m_inventoryService;
    std::shared_ptr<SalesService> m_salesService;
    std::shared_ptr<ReportService> m_reportService;
};

#endif // APPCONTEXT_H
