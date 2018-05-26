//
//  Parent+MailingListDelegate.swift
//  AudioKitSynthOne
//
//  Created by Aurelius Prochazka on 5/25/18.
//  Copyright © 2018 AudioKit. All rights reserved.
//

// Mailing List PopOver Delegate

extension ParentViewController: MailingListDelegate {
    func didSignMailingList(email: String) {

        signedMailingList = true

        DispatchQueue.main.async {
            if let headerVC = self.childViewControllers.first as? HeaderViewController {
                headerVC.updateMailingListButton(self.signedMailingList)
            }
        }
        userSignedMailingList(email: email)
    }

    func userSignedMailingList(email: String) {
        appSettings.signedMailingList = true
        appSettings.userEmail = email
        saveAppSettingValues()

        presetsViewController.addBonusPresets()
    }
}