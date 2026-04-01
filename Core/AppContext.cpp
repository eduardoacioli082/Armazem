#include "Core/AppContext.h"

#include <QDir>
#include <QStandardPaths>

#include <utility>

AppContext::AppContext() = default;

QString AppContext::appDataDirectory()
{
    if (m_appDataDirectory.isEmpty()) {
        m_appDataDirectory = resolveAppDataDirectory();
    }

    return m_appDataDirectory;
}

QString AppContext::databaseFilePath()
{
    return QDir(appDataDirectory()).filePath("armazem.db");
}

bool AppContext::ensureAppDataDirectory()
{
    const QString directoryPath = appDataDirectory();
    if (directoryPath.isEmpty()) {
        return false;
    }

    QDir directory(directoryPath);
    if (directory.exists()) {
        return true;
    }

    return QDir().mkpath(directoryPath);
}

void AppContext::setInitialWindowFactory(InitialWindowFactory factory)
{
    m_initialWindowFactory = std::move(factory);
}

bool AppContext::hasInitialWindowFactory() const
{
    return static_cast<bool>(m_initialWindowFactory);
}

QWidget *AppContext::createInitialWindow()
{
    if (!m_initialWindowFactory) {
        return nullptr;
    }

    return m_initialWindowFactory(*this);
}

void AppContext::setDatabaseManager(const std::shared_ptr<DatabaseManager> &databaseManager)
{
    m_databaseManager = databaseManager;
}

std::shared_ptr<DatabaseManager> AppContext::databaseManager() const
{
    return m_databaseManager;
}

void AppContext::setSessionManager(const std::shared_ptr<SessionManager> &sessionManager)
{
    m_sessionManager = sessionManager;
}

std::shared_ptr<SessionManager> AppContext::sessionManager() const
{
    return m_sessionManager;
}

void AppContext::setAuthService(const std::shared_ptr<AuthService> &authService)
{
    m_authService = authService;
}

std::shared_ptr<AuthService> AppContext::authService() const
{
    return m_authService;
}

void AppContext::setUserService(const std::shared_ptr<UserService> &userService)
{
    m_userService = userService;
}

std::shared_ptr<UserService> AppContext::userService() const
{
    return m_userService;
}

void AppContext::setProductService(const std::shared_ptr<ProductService> &productService)
{
    m_productService = productService;
}

std::shared_ptr<ProductService> AppContext::productService() const
{
    return m_productService;
}

void AppContext::setInventoryService(const std::shared_ptr<InventoryService> &inventoryService)
{
    m_inventoryService = inventoryService;
}

std::shared_ptr<InventoryService> AppContext::inventoryService() const
{
    return m_inventoryService;
}

void AppContext::setSalesService(const std::shared_ptr<SalesService> &salesService)
{
    m_salesService = salesService;
}

std::shared_ptr<SalesService> AppContext::salesService() const
{
    return m_salesService;
}

void AppContext::setReportService(const std::shared_ptr<ReportService> &reportService)
{
    m_reportService = reportService;
}

std::shared_ptr<ReportService> AppContext::reportService() const
{
    return m_reportService;
}

QString AppContext::resolveAppDataDirectory() const
{
    const QString standardPath =
        QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

    if (!standardPath.isEmpty()) {
        return standardPath;
    }

    return QDir::home().filePath(".armazem");
}
