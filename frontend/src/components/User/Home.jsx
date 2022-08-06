import React from 'react'
import Feature from './Start/Feature'
import Info from './Start/Info'
import NavBar from './NavBar/NavBar'
import Start from './Start/Start'
import Wallet from './Start/Wallet'
import Card from './Start/Card'
import Footer from './Footer/Footer'

const Home = () => {
  return (
    <div>
        <div>
            <NavBar />
        </div>
        <div>
            <Start />
        </div>
        <div>
            <Feature />
        </div>
        <div>
            <Info />
        </div>
        <div>
            <Wallet />
        </div>
        <div>
            <Card />
        </div>
        <div>
            <Footer />
        </div>
    </div>
  )
}

export default Home