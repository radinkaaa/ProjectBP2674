package com.example.projectbp2674

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.Toast

class LoginActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_login)
        //instance
        val btnlogin:Button = findViewById(R.id.buttonLogin)
        val txtUsername:EditText = findViewById(R.id.editTextUsername)
        val txtPassword:EditText = findViewById(R.id.editTextPasword)
        val logmodel = LoginModel()
        //even btn logindi klik
        btnlogin.setOnClickListener {
            //validasi login
            logmodel.username = txtUsername.text.toString()
            logmodel.password = txtPassword.text.toString()
            if (logmodel.loginCek() == true) {
            //call home activity
            val intenHome = Intent(this, HomeActivity::class.java)
            startActivity(intenHome)

            }
            else {Toast.makeText(this, "username/password salah", Toast.LENGTH_SHORT).show()
            }

        }
    }
}