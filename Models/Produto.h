#pragma once
#include <QString>
#include <QDateTime>

class Produto {
private:
    int id;
    QString codigo;
    QString nome;
    QString descricao;
    double preco;
    int quantidade;
    int categoriaId;
    bool ativo;
    QDateTime dataCadastro;

public:
    Produto() : id(0), preco(0.0), quantidade(0), categoriaId(0), ativo(true) {}

    // Getters e Setters básicos
    int getId() const { return id; }
    void setId(int newId) { id = newId; }
    
    double getPreco() const { return preco; }
    void setPreco(double newPreco) { preco = (newPreco >= 0.0) ? newPreco : 0.0; } 
    
    int getQuantidade() const { return quantidade; }
    void setQuantidade(int newQtd) { quantidade = (newQtd >= 0) ? newQtd : 0; }
    
};
