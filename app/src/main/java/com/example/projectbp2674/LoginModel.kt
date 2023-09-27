package com.example.projectbp2674

class LoginModel {
    //variabel
    var username = " "
    var password = " "
    //method/func
    fun loginCek() : Boolean{
        if (username.equals("radinka") && password.equals("admin")) {
            return true
        }
        else{
            return false
        }
    }
}