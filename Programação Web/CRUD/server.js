const express = require('express');

const app = express();
const port = 3000;


const db = require('./db');

app.get('/', (req, res) => {

    res.send('Servidor funcionando');

})

app.listen(port,() => {
    console.log("Servidor rodando na 3000")


})

