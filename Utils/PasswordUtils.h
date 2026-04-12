#pragma once
#include <QString>

class PasswordUtils {
public:
    // Transforma uma senha em texto puro em um Hash SHA-256
    static QString hashPassword(const QString& plainText);
    
    // Compara uma senha digitada com o Hash salvo no banco
    static bool verifyPassword(const QString& plainText, const QString& hash);
};