const express = require('express')
const path = require('path')

const app = express()
const port = process.env.PORT || 3000

const publicDirectoryPath = path.join(__dirname,'..')
const viewsPath = path.join(__dirname, '..')

app.use(express.static(publicDirectoryPath))

app.set('view engine','html')
app.set('views', viewsPath)


app.listen(port,()=>{
    console.log('Server is up on port ' + port)
})