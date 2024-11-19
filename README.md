<!DOCTYPE html> 
<html> 
 <style>
* { 
 margin: 0; 
 padding: 0; 
 box-sizing: border-box; 
} 
header { 
 background: #263238; 
 color: #fff; 
 padding: 20px 0; 
} 
header .container { 
 display: flex; 
 justify-content: space-between; 
 align-items: center; 
} 
header nav ul { 
 list-style: none; 
 display: flex; 
 align-items: center; 
} 
header nav ul li { 
 margin-right: 20px; 
} 
header nav ul li a { 
 color: #fff; 
 text-decoration: none; 
 font-size: 18px; 
} 
header nav ul li a:hover { 
 text-decoration: underline; 
} 
header .logo img { 
 width: 150px; 
} 
#hero { 
 background: url('images/hero.jpg') no-repeat center center/cover; 
 height: 500px; 
 display: flex; 
 align-items: center; 
} 
#hero .container { 
 text-align: center; 
} 
#hero h1 { 
 font-size: 48px; 
 margin-bottom: 20px; 
} 
#hero p { 
 font-size: 24px; 
 margin-bottom: 30px; 
} 
#hero button { 
 background: #fff; 
 color: #263238; 
 border: none; 
 padding: 10px 20px; 
 font-size: 18px; 
 border-radius: 5px; 
 cursor: pointer; 
} 
#hero button:hover { 
 background: #263238; 
 color: #fff; 
} 
/* Стили для секции "О нас" */ 
#about { 
 background: #fff; 
 padding: 50px 0; 
} 
#about .container { 
 text-align: center; 
} 
#about h2 { 
 font-size: 36px; 
 margin-bottom: 30px; 
} 
#about p { 
 font-size: 18px; 
 line-height: 1.5; 
} 
/* Стили для секции "Наши курсы" */ 
#courses { 
 background: #f2f2f2; 
 padding: 50px 0; 
} 
#courses .container { 
 text-align: center; 
} 
#courses h2 { 
 font-size: 36px; 
 margin-bottom: 30px; 
} 
.course { 
 background: #fff; 
 border: 1px solid #ccc; 
 padding: 20px; 
 margin-bottom: 20px; 
 border-radius: 10px; 
}  
.course h3 { 
 font-size: 24px; 
 margin-bottom: 10px; 
}  
.course p { 
 font-size: 18px; 
 line-height: 1.5; 
 margin-bottom: 10px; 
}  
.course .price { 
 font-size: 20px; 
 font-weight: bold; 
}  
/* Стили для секции "Контакты" */ 
#contact { 
 background: #263238; 
 color: #fff; 
 padding: 50px 0; 
}  
#contact .container { 
 text-align: center; 
}  
#contact h2 { 
 font-size: 36px; 
 margin-bottom: 30px; 
}  
#contact p { 
 font-size: 18px; 
 line-height: 1.5; 
 margin-bottom: 30px; 
}  
#contact form label { 
 font-size: 18px; 
 display: block; 
}  
#contact form input, 
#contact form textarea { 
 width: 100%; 
 padding: 10px; 
 margin-bottom: 20px; 
 border-radius: 5px; 
 border: none; 
 background: rgba(255,255,255,0.8); 
 font-size: 18px; 
}  
#contact form button { 
 background: #fff; 
 color: #263238; 
 border: none; 
 padding: 10px 20px; 
 font-size: 18px; 
 border-radius: 5px; 
 cursor: pointer; 
} 
#contact form button:hover { 
 background: #263238; 
 color: #fff; 
}  
/* Стили для подвала */ 
footer { 
 background: #263238; 
 color: #fff; 
 padding: 20px 0; 
}  
footer .container { 
 text-align: center; 
}  
footer p { 
 font-size: 18px; 
} 
</style>
<head> 
 <title></title> 

</head> 
<body> 
 <header> 
  <div class="container"> 
   <nav> 
    <ul> 
     <li><a href="#">Главная</a></li> 
     <li><a href="#">О нас</a></li> 
     <li><a href="#">Курсы</a></li> 
     <li><a href="#">Контакты</a></li> 
    </ul> 
   </nav> 
   <div class="logo"> 
    <a href="#"><img src="images/logo.png" alt="logo"></a> 
   </div> 
  </div> 
 </header> 
 <section id="hero"> 
  <div class="container"> 
   <h1>Учите английский быстро и эффективно!</h1> 
   <p>Присоединяйтесь к нашим курсам и достигайте своих целей в изучении английского языка.</p> 
   <button>Начать учиться</button> 
  </div> 
 </section> 
 <section id="about"> 
  <div class="container"> 
   <h2>О нас</h2> 
   <p>Мы команда профессиональных преподавателей английского языка с более чем 10-летним опытом преподавания. Наша методика основана на индивидуальном подходе к каждому ученику. Мы предлагаем различные курсы, чтобы помочь нашим клиентам достичь своих целей в изучении английского языка.</p> 
  </div> 
 </section> 
 <section id="courses"> 
  <div class="container"> 
   <h2>Наши курсы</h2> 
   <div class="course"> 
    <h3>Основной курс английского языка</h3> 
    <p>Наш основной курс английского языка предназначен для начинающих и среднего уровня владения языком. Вы изучите грамматику, лексику, практику речи и понимания английского языка.</p> 
    <p class="price">Цена: 2000 рублей за месяц</p> 
   </div> 
   <div class="course"> 
    <h3>Бизнес-английский</h3> 
    <p>Наш курс бизнес-английского предназначен для людей, которые хотят улучшить свои навыки общения в деловой среде. Мы изучим специальный лексикон и различные ситуации, которые могут возникнуть в бизнесе.</p> 
    <p class="price">Цена: 2500 рублей за месяц</p> 
   </div> 
   <div class="course"> 
    <h3>IELTS подготовка</h3> 
    <p>IELTS - международный тест на знание английского языка, который необходим для поступления в зарубежные учебные заведения и получения рабочей визы. Наш курс подготовки к IELTS поможет вам получить нужные знания и навыки для успешной сдачи теста.</p> 
    <p class="price">Цена: 3000 рублей за месяц</p> 
   </div> 
  </div> 
 </section> 
 <section id="contact"> 
  <div class="container"> 
   <h2>Контакты</h2> 
   <p>Свяжитесь с нами, чтобы узнать больше о наших курсах и начать учить английский язык.</p> 
   <form> 
    <label>Ваше имя:</label><br> 
    <input type="text" name="name" required><br> 
    <label>Ваш email:</label><br> 
    <input type="email" name="email" required><br> 
    <label>Сообщение:</label><br> 
    <textarea name="message" required></textarea><br> 
    <button>Отправить</button> 
   </form> 
  </div> 
 </section> 
 <footer> 
  <div class="container"> 
   <p>Copyright &copy; 2020</p> 
  </div> 
 </footer> 
 <!-- подключение скриптов --> 
 <script src="main.js"></script> 
</body> 
</html> 
 
Generated by AI Chat Android App.
