# Projet : Gestion d'inventaire en C++

## 🎯 Objectif du projet
Développer une application console en C++ permettant de gérer un inventaire de produits :
- Ajouter un produit
- Supprimer un produit
- Modifier la quantité
- Modifier le prix
- Afficher la liste des produits

Ce projet met en pratique :
- La programmation orientée objet (POO)
- Les structures de données (map, vector)
- L'organisation d'un projet C++
- L'utilisation d'une base MySQL
- Le versionnement avec Git et GitHub

---

## 🧱 Architecture du projet


---

# 🟦 **2. script.sql (à mettre dans ton dépôt)**

```sql
CREATE DATABASE IF NOT EXISTS inventaire;
USE inventaire;

CREATE TABLE IF NOT EXISTS products (
    id INT PRIMARY KEY,
    name VARCHAR(100),
    quantity INT,
    price DOUBLE
);

INSERT INTO products VALUES (1, 'Stylo', 50, 1.20);
INSERT INTO products VALUES (2, 'Cahier', 30, 2.50);
INSERT INTO products VALUES (3, 'Clé USB', 15, 9.99);
INSERT INTO products VALUES (4, 'Souris', 10, 14.90);
INSERT INTO products VALUES (5, 'Casque Audio', 8, 29.90);
