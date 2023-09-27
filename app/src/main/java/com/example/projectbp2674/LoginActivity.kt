package com.example.projectbp2674

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button

class LoginActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_login)
        //instance
        val btnlogin:Button = findViewById(R.id.buttonLogin)
        //even btn logindi klik
        btnlogin.setOnClickListener {
            //call home activity
            val intenHome = Intent(this, HomeActivity::class.java)
            startActivity(intenHome)
        }
    }
}